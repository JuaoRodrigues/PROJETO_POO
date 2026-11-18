#ifndef SENSORFUMO_H
#define SENSORFUMO_H

#include "Sensor.h"

class SensorFumo : public Sensor
{

    public:
        SensorFumo();
        SensorFumo(int _id, string _marca, float _probAvaria, int _x, int _y, float _valor);
        virtual ~SensorFumo();
        string GetTipo() { return "SENSOR-FUMO"; }

};

#endif // SENSORFUMO_H
