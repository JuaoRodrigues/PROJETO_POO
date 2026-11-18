#include "SensorMissel.h"

SensorMissel::SensorMissel()
{
    //ctor
}

SensorMissel::SensorMissel(int _id, string _marca, float _probAvaria, int _x, int _y, float _valor)
: Sensor(_id, _marca, _probAvaria, _x, _y, _valor)
{

}

SensorMissel::~SensorMissel()
{
    //dtor
}
