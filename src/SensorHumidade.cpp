#include "SensorHumidade.h"

SensorHumidade::SensorHumidade()
{
    //ctor
}

SensorHumidade::SensorHumidade(int _id, string _marca, float _probAvaria, int _x, int _y, float _valor)
: Sensor(_id, _marca, _probAvaria, _x, _y, _valor)
{

}

SensorHumidade::~SensorHumidade()
{
    //dtor
}
