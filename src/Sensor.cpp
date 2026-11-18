#include "Sensor.h"

Sensor::Sensor()
: Comum()
{
    VALOR = 0;
}

Sensor::Sensor(int _id, string _marca, float _probAvaria, int _x, int _y, float _valor)
: Comum(_id, _marca, _probAvaria, _x, _y)
{
    VALOR = _valor;
}

Sensor::~Sensor()
{
    //dtor
}

