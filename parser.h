#ifndef FINITEDIFFERENCE_PARSER_H
#define FINITEDIFFERENCE_PARSER_H


#include "grid.h"

class parser {
    public:
        parser(){

        }
        ~parser(){

        }
        grid parse(double (*init)(double, double));     //Функция для заполнения полей экземпляра класса grid информацией из текстового файла. Кроме функции начальных условий

};


#endif //FINITEDIFFERENCE_PARSER_H
