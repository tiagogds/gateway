#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>
#include "Defines.h"

class Configurar
{
    private:
        char identidade[nchar];
        char chave[nchar];
        char wifi[nchar];
        bool conectado;

    public:
        Configurar();
        char* listaWifi[nWifi];
        void setIdentidade(char* p_identidade);
        void getIdentidade(char* id);

        void setChave(char* p_chave);
        void getChave(char* key);

        void setWifi(char* p_wifi);
        void getWifi(char* ssid);

};

#endif