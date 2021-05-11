#include "Conectar.h"

Conectar::Conectar()
{
    WiFi.mode(WIFI_STA);
    WiFi.disconnect();
    Serial.begin(9600);
}


/*
    Função que obtém as wifis disponíveis e popula o vetor lista.
*/
void Conectar::getWifi(char** lista){
    // limpa a lista antes de começar.
    for(int i = 0; i < nWifi; i++) lista[i] = '\0';
    int n = WiFi.scanNetworks();
    if (n <= 0) {
        return;
    } else {
        for (int i = 0; i < n; i++) {
            // O método c_str() converte de string para um array de chars.
            lista[i] = const_cast<char*>( WiFi.SSID(i).c_str() );
            //Serial.print(WiFi.SSID(i));
            //Serial.print(" (");
            //Serial.print(WiFi.RSSI(i));
            //Serial.print(")");
            //Serial.println((WiFi.encryptionType(i) == WIFI_AUTH_OPEN)?" ":"*");
            //delay(10);
            Serial.println(lista[i]);
        }
    }
}