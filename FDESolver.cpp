#include "FDESolver.h"



void FDESolver::setInitial() {                                  //Метод для задания начальных условий(IC) для всех точек (Кроме граничных(BC))
    double leng = 1;
    double wid = 1;
    int numberY =   (this->FDEgrid.length/this->FDEgrid.lengthStep)+1;
    int numberX =   (this->FDEgrid.width/this->FDEgrid.widthStep)+1;
    this->curTime =std::vector<std::vector<double>>(numberY, std::vector<double>(numberX));         //Тут задаем матрицу, нужного нам размера, где значения [i][j] обозначают точку с соответсвующими координатми
    this->nextTime =std::vector<std::vector<double>>(numberY, std::vector<double>(numberX));        //Тоже самое, что и выше (Для второго временнго слоя)
    while (leng<=this->FDEgrid.labels-1){
        while (wid<=this->FDEgrid.labels-1){
           this->curTime[leng][wid]=FDEgrid.initFunction(leng/this->FDEgrid.labels,wid/this->FDEgrid.labels);                                        //Подставляем для всех точек, кроме граничных, коээфициенты в функцию начальных условий и получаем значения в момент времени 0
            wid+=1;
        }
        wid = 1;
        leng+=1;
    }
}
void FDESolver::setBound(){                                 //Устанавливаем граничные условия
    double leng = 0;
    double wid = 0;
    while (wid<=this->FDEgrid.labels){
        this->curTime[0][wid]=this->FDEgrid.boundTop;
        wid+=1;
    }
    wid = 0;
    leng = ceil(this->FDEgrid.labels-1);
    while (wid<=this->FDEgrid.labels){
        this->curTime[leng][wid]=this->FDEgrid.boundBot;
        wid+=1;
    }
    leng = 0;
    wid = 0;
    while (leng<this->FDEgrid.labels){
        this->curTime[leng][0]=this->FDEgrid.boundLeft;
        leng+=1;
    }
    leng = 0;
    wid = ceil(this->FDEgrid.labels-1);
    while (leng<this->FDEgrid.labels){
        this->curTime[leng][wid]=this->FDEgrid.boundRight;
        leng+=1;
    }
    curTime[0][0] = (FDEgrid.boundTop + FDEgrid.boundLeft)/2;
    curTime[0][ceil(this->FDEgrid.labels-1)] = (FDEgrid.boundTop + FDEgrid.boundRight)/2;
    curTime[ceil(this->FDEgrid.labels-1)][0] = (FDEgrid.boundBot + FDEgrid.boundLeft)/2;
    curTime[ceil(this->FDEgrid.labels-1)][ceil(this->FDEgrid.labels-1)] = (FDEgrid.boundBot + FDEgrid.boundRight)/2;
}

void FDESolver::Solve() {                       //Функция решения
    this->nextTime = this->curTime;             //Чтобы не заполнять еще одну матрицу, просто копируем уже имеющуюся. Потом все равно перезаписывать все значения (кроме граничных)
    std::ofstream out("FDEout.txt");         //Файл, куда записываем результаты
    std::ofstream outLog("FDElog.txt");
    out.precision(9);
    double lengOut = 0;
    double widOut = 0;
    double leng = 1;
    double wid = 1;
    FDEgrid.timeStepAmount = FDEgrid.time/FDEgrid.timeStep;
    for (int i = 0; i<FDEgrid.timeStepAmount+2; i++){
        while (leng<this->FDEgrid.labels-1){
            while (wid<this->FDEgrid.labels-1){       //Здесь и далее считаем значения на новом временном слое, используя явную формулу конечных разнсотей
                nextTime[leng][wid]=curTime[leng][wid]+FDEgrid.timeStep*this->FDEgrid.thermalDiffusivity*((this->curTime[leng][wid-1]+this->curTime[leng-1][wid]-4*this->curTime[leng][wid]+this->curTime[leng+1][wid]+this->curTime[leng][wid+1])/(this->FDEgrid.widthStep*this->FDEgrid.lengthStep));
                wid+=1;
            }
            wid = 1;
            leng+=1;
        }
        leng = 1;
        wid = 1;
        out<<i*FDEgrid.timeStep<<std::endl;
        while (lengOut <this->FDEgrid.labels){                           //Вывод в файл
            while (widOut < this->FDEgrid.labels){
                out << curTime[lengOut][widOut] << " ";
                widOut+=1;
            }
            out<<std::endl;
            widOut = 0;
            lengOut+=1;
        }
        lengOut = 0;
        out<<std::endl;
        log(i,outLog);
        curTime = nextTime;

    }
}

void FDESolver::solveFDI() {
    this->nextTime = this->curTime;
    std::ofstream out("FDIout.txt");
    std::ofstream outLog("FDIlog.txt");
    out.precision(9);
    double lengOut = 0;
    double widOut = 0;
    double leng = 0;
    double wid = 1;
    FDEgrid.timeStepAmount = FDEgrid.time/FDEgrid.timeStep;
    double cConst = FDEgrid.thermalDiffusivity;
    double tStep = FDEgrid.timeStep;
    double _step = FDEgrid.widthStep;
    std::vector <double> P;
    std::vector <double> Q;
    double a1, b1,d1;
    double P1, Q1;
    double t = 1;
    while (t<FDEgrid.timeStepAmount+2) {
        this->nextTime = curTime;
        double aCur, bCur, cCur, dCur;
        for (int k =1; k < this->FDEgrid.labels-1; k++) {
            a1 = 1;
            b1 = 0;
            d1 = curTime[0][k];
            P1 = b1 / a1;
            Q1 = d1 / a1;
            P.push_back(P1);
            Q.push_back(Q1);
            for (int i = 1; i < curTime.size() - 1; i++) {
                aCur = 1 + (2 * cConst * tStep) / (_step * _step);
                bCur = (cConst * tStep) / (_step * _step);
                cCur = (cConst * tStep) / (_step * _step);
                dCur = curTime[i][k];
                P.push_back((bCur) / (aCur - cCur * P[i - 1]));
                Q.push_back((cCur * Q[i - 1] + dCur) / (aCur - cCur * P[i - 1]));
            }
            for (int i = curTime.size() - 2; i > 0; i--) {
                double res = P[i] * curTime[i+1][k] + Q[i];
                curTime[i][k] = res;
            }
            Q.clear();
            P.clear();
        }

        for (int k = 1; k < this->FDEgrid.labels-1; k++) {
            a1 = 1;
            b1 = 0;
            d1 = curTime[k][0];
            P1 = b1 / a1;
            Q1 = d1 / a1;
            P.push_back(P1);
            Q.push_back(Q1);
            for (int i = 1; i < curTime.size() - 1; i++) {
                aCur = 1 + (2 * cConst * tStep) / (_step * _step);
                bCur = (cConst * tStep) / (_step * _step);
                cCur = (cConst * tStep) / (_step * _step);
                dCur = curTime[k][i];
                P.push_back((bCur) / (aCur - cCur * P[i - 1]));
                Q.push_back((cCur * Q[i - 1] + dCur) / (aCur - cCur * P[i - 1]));
            }
            for (int i = curTime.size() -2; i > 0; i--) {
                if (k !=0 && k!=curTime.size()-1) {
                    double res = P[i] * curTime[k][i + 1] + Q[i];
                    curTime[k][i] = res;
                }
            }
            Q.clear();
            P.clear();
        }
        out<<t*FDEgrid.timeStep<<std::endl;
        while (lengOut < this->FDEgrid.labels){                           //Вывод в файл
            while (widOut < this->FDEgrid.labels){
                out << curTime[lengOut][widOut] << " ";
                widOut+=1;
            }
            out<<std::endl;
            widOut = 0;
            lengOut+=1;
        }
        lengOut = 0;

        out<<std::endl;
        log(t,outLog);
        t++;
    }



}

void FDESolver::log(int i, std::ostream& outLog) {
    double leng=0, wid = 0;
    std::vector<double> residual;
    double sum = 0;
    while (leng<=this->FDEgrid.labels-1){
        while (wid<=this->FDEgrid.labels-1){
            if ((curTime[leng][wid]) != 0) {
                residual.push_back(fabs(nextTime[leng][wid] - curTime[leng][wid]) / fabs(curTime[leng][wid]));
                wid += 1;
            }
            else{
                residual.push_back(0);
                wid += 1;
            }
        }
        wid = 0;
        leng+=1;
    }
    double foo = this->FDEgrid.labels*this->FDEgrid.labels;
    for (int i = 0; i<residual.size();i++){
        sum+=residual[i];
    }
    sum = sum / foo;
    outLog<<"Time: "<<i*FDEgrid.timeStep<<" Residual: "<<sum<<"\n";
}
