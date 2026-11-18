#ifndef MOTORELETRICO_H
#define MOTORELETRICO_H

#include "Motor.h"

class MotorEletrico : public Motor
{
    public:
        MotorEletrico();
        virtual ~MotorEletrico();
        MotorEletrico(int _id, string _marca, float _probAvaria, int _x, int _y, float _consumoHora, float _tempAviso, float _tempParagem);

        string GetTipo() { return "MOTOR-ELETRICO"; }
};

#endif // MOTORELETRICO_H
