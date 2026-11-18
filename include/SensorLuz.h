#ifndef SENSORLUZ_H
#define SENSORLUZ_H

#include "Sensor.h"

class SensorLuz : public Sensor
{
    public:
        SensorLuz();
        SensorLuz(int _id, string _marca, float _probAvaria, int _x, int _y, float _valor);
        virtual ~SensorLuz();
        string GetTipo() { return "SENSOR-LUZ"; }
};

#endif // SENSORLUZ_H
