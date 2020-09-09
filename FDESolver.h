#include "grid.h"

#ifndef FINITEDIFFERENCE_FDESOLVER_H
#define FINITEDIFFERENCE_FDESOLVER_H


class FDESolver {
    public:
        grid FDEgrid;
        std::vector< std::vector <double>> curTime;    //Значения темпратуры на временном слое k
        std::vector< std::vector <double>> nextTime;    //Значения темпратуры на временном слое k+1

        void log(int, std::ostream&);
        void setBound();                               //Задание граничных условий
        void setInitial();                             //Задание начальных условий TODO Добавить расчет температуры в угловых точках пластины, как среднее арифметическое температуры двух соотвествующих сторон
        void Solve();                                  //Решение задачи
        void solveFDI();

        FDESolver(grid x){
            this->FDEgrid=x;
        }
        ~FDESolver(){

        }



};


#endif //FINITEDIFFERENCE_FDESOLVER_H
