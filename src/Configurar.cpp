#include <Arduino.h>
#include "Configurar.h"

Configurar::Configurar()
{

    identidade[20] = '\0';
    chave[20] = '\0';
    wifi[20] = '\0';
    conectado = false;

}



void Configurar::setIdentidade(char* p_identidade){

    for(int i = 0; i < 20; i++) identidade[i] = p_identidade[i];

}
void Configurar::getChave(char* key){

    for(int i = 0; i < 20; i++) chave[i] = key[i];

}

void Configurar::setChave(char* p_chave){}

void Configurar::setWifi(char* p_wifi){}
void Configurar::getWifi(char* ssid){}
