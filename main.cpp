#include "FDESolver.h"
#include "grid.h"
#include "parser.h"

using namespace std;
double f(double x, double y){           //Функция, задающая начальные условия
    return 1;
}
int main() {
    parser Scanner = parser();          //Создаем парсер
    grid net = Scanner.parse(f);        //Создаем сетку и заполняем ее значениями из текстового файла с помощью парсера. В качестве аргумента передаем ссылку на функцию, задающую начальные условия
    delete &Scanner;                    //Удалем парсер
    FDESolver FDE = FDESolver(net);     //Создаем экземпляер класса Solver
    delete &net;                        //Удаляем сетку
    FDE.setInitial();
    FDE.setBound();
    FDE.Solve();

    parser ScannerFDI = parser();          //Создаем парсер
    grid netFDI = Scanner.parse(f);        //Создаем сетку и заполняем ее значениями из текстового файла с помощью парсера. В качестве аргумента передаем ссылку на функцию, задающую начальные условия
    delete &ScannerFDI;                    //Удалем парсер
    FDESolver FDI = FDESolver(netFDI);     //Создаем экземпляер класса Solver
    delete &netFDI;                        //Удаляем сетку
    FDI.setInitial();
    FDI.setBound();
    FDI.solveFDI();



    //FDE.setBound();                     //Устанвливаем начальные значения в нашу матрицу
    //int temp;
   // cout<<"1.FDE\n2.FDI\n";
    //cin >> temp;
   //if (temp == 1)
    //    FDE.Solve();                    //Решаем и выводим
    //else
    //    FDE.solveFDI();
    //int x;
    return 0;
}
