#include "parser.h"

    grid parser::parse(double (*init)(double, double)) {                //Получаемый параметр - ссылка на функцию, задающую начальные условия
    std::ifstream x ("input.txt",std::ios::in);             //Название текстового файла. TODO Передавать в метод строку - имя текстового файла (?)
    grid net = grid(init);                                          //Используем конструктор класса grid, чтобы передать функцию начальных условий
    std::string curStr;
    size_t number;
    std::string temp;
    int i = 0;
    std::vector <double> values;                                    //Считваемые значения из файла
    while(!x.eof()) {
        getline(x, curStr);
        number = curStr.find(' ');                              //Режем строки и преобразуем
        temp = curStr.substr(0, number);
        values.push_back(stod(temp));
    };
    net.thermalDiffusivity = values[0];
    net.timeStepAmount = values[1];
    net.length = values[2];
    net.width = values[3];
    net.boundTop = values[4];
    net.boundBot = values[5];                                      //Присваиваем полям класса grid значения из текстового файла
    net.boundRight = values[6];
    net.boundLeft = values[7];
    net.lengthStep = values[8];
    net.widthStep = values[9];
    net.timeStep = values[10];
    net.time = values[11];
    net.labels = net.width/net.widthStep;
    return net;
}
