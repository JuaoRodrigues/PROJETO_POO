#ifndef MOTORCOMBUSTAO_H
#define MOTORCOMBUSTAO_H

#include "Motor.h"

class MotorCombustao : public Motor
{
    public:
        MotorCombustao();
        virtual ~MotorCombustao();
        MotorCombustao(int _id, string _marca, float _probAvaria, int _x, int _y, float _consumoHora, float _tempAviso, float _tempParagem);

        string GetTipo() { return "MOTOR-COMBUSTAO"; }
};

#endif // MOTORCOMBUSTAO_H
