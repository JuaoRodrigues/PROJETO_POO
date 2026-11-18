#include "Motor.h"

Motor::Motor()
: Comum()
{
    CONSUMO_HORA = 0;
    TEMPERATURA_AVISO = 0;
    TEMPERATURA_PARAGEM = 0;
}

Motor::Motor(int _id, string _marca, float _probAvaria, int _x, int _y, float _consumoHora, float _tempAviso, float _tempParagem)
: Comum(_id, _marca, _probAvaria, _x, _y)
{
    CONSUMO_HORA = _consumoHora;
    TEMPERATURA_AVISO = _tempAviso;
    TEMPERATURA_PARAGEM = _tempParagem;
}

Motor::~Motor()
{
    //dtor
}
