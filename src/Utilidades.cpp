#include "Utilidades.h"

Utilidades::Utilidades()
{

    recebendo = false;
    for(int i = 0; i < 3; i++) comando[i] = '\0';

}


/*
    Função que decodifica um comando recebeido pela serial.
*/
void Utilidades::getComando(){
    // limpa a lista antes de começar.
    bool rc;
    char l;
    if (Serial.available() > 0){
        while(Serial.available()){
            l = Serial.read();
            if(l == '\n'){
                linha[c] = '\0';
                rc = true;
                break;
            }
            linha[c] = l;
            if(c >= 19) break;
        }
    }

    if(linha[0] == 'x' && linha[1] == '0' && linha[2] == '3' && rc){
        recebendo = true;
        Serial.println(linha);
        rc = false;
        nc = 0;
    }
}