#ifndef MOTOR_H
#define MOTOR_H

#include "Comum.h"

//Motor: herda de Comum e acrescenta apenas o que e so dele.

class Motor : public Comum
{
    float CONSUMO_HORA;
    float TEMPERATURA_AVISO;
    float TEMPERATURA_PARAGEM;

    public:
        Motor();
        Motor(int _id, string _marca, float _probAvaria, int _x, int _y, float _consumoHora, float _tempAviso, float _tempParagem);
        virtual ~Motor();

        float getCONSUMO_HORA()         { return CONSUMO_HORA; };
        float getTEMPERATURA_AVISO()    { return TEMPERATURA_AVISO; };
        float getTEMPERATURA_PARAGEM()  { return TEMPERATURA_PARAGEM; };
        string GetTipo() { return "MOTOR"; }

        // IMPLEMENTAR RUN, START, RESTART E ESTOU_QUENTE
};

#endif // MOTOR_H
