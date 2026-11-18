#ifndef SENSORHUMIDADE_H
#define SENSORHUMIDADE_H

#include "Sensor.h"

class SensorHumidade : public Sensor
{
    public:
        SensorHumidade();
        SensorHumidade(int _id, string _marca, float _probAvaria, int _x, int _y, float _valor);
        virtual ~SensorHumidade();
                string GetTipo() { return "SENSOR-HUMIDADE"; }

};

#endif // SENSORHUMIDADE_H
