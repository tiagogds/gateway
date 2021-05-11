#ifndef UTIL_H
#define UTIL_H

#include "Arduino.h"
#include "Defines.h"

class Utilidades
{
    private:
        int c = 0;
        int nc = 0;
        char linha[20];
    public:
        Utilidades();

        bool recebendo;
        char comando[3];

        void getComando();

};

#endif