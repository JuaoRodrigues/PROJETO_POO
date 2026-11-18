#ifndef SENSORMISSEL_H
#define SENSORMISSEL_H

#include "Sensor.h"

class SensorMissel : public Sensor
{
    public:
        SensorMissel();
        SensorMissel(int _id, string _marca, float _probAvaria, int _x, int _y, float _valor);
        virtual ~SensorMissel();

        string GetTipo() { return "SENSOR-MISSEL"; }
};

#endif // SENSORMISSEL_H
