#include <vector>
#include <fstream>
#include <string>
#include <cmath>
#include <iostream>
#ifndef FINITEDIFFERENCE_GRID_H
#define FINITEDIFFERENCE_GRID_H


class grid {
    public:
        grid(double (*init)(double, double)){              //Конструктор, получающий функцию, задающие начальные условия.
            this->timeStep = 0;
            this->thermalDiffusivity=0;
            this->timeStepAmount = 0;
            this->length = 0;
            this->width = 0;
            this->boundLeft= 0; this->boundRight = 0; this->boundTop = 0; this->boundBot = 0;
            this->initFunction = init;
            this->lengthStep = 0;
            this->widthStep = 0;
            this->time = 0;
            this->labels=0;

        }
         grid(){                                            //Конструктор без задания функции, определяющей начальные условия. Используется для работы конструктора FDESolver.
             this->timeStep=0;
             this->thermalDiffusivity=0;
             this->timeStepAmount = 0;
             this->length = 0;
             this->width = 0;
             this->boundLeft= 0; this->boundRight = 0; this->boundTop = 0; this->boundBot = 0;
             this->lengthStep = 0;
             this->widthStep = 0;
             this->time = 0;
             this->labels=0;
    }


        double timeStep;
        double thermalDiffusivity;  //Коэффициент температуропровдности.
        int timeStepAmount;         //Количество шагов по времени.
        double length;              //Вся длина пластины (Ось ординат).
        double width;               //Все ширина пластины (Ось абсцисс).
        double boundTop, boundBot, boundRight, boundLeft;   //Граничные условия - значения температуры для соответствующих сторон пластины.
        double (*initFunction)(double, double);     //Указатель на задаваемую функцию, определяющую начальные условия. Задается в main.
        double lengthStep;          //Значение "дельта" x. Расстояние между точками сетки по оси ординат
        double widthStep;           //Значение "дельта" y. Расстояние между точками сетки по оси абсцисс
        double time;
        double labels;
};


#endif //FINITEDIFFERENCE_GRID_H
