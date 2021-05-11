#ifndef CONN_H
#define CONN_H

#include "Arduino.h"
#include "Defines.h"
#include <Wifi.h>

class Conectar
{
    public:
    Conectar();
    void getWifi(char** lista);

};

#endif