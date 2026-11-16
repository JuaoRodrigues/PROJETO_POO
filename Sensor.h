#ifndef SENSOR_H
#define SENSOR_H

#include "Comum.h"

//herda de Comum e acrescenta apenas o que e so dele (VALOR)

class Sensor : public Comum
{
    float VALOR;

    public:
        Sensor();
        Sensor(int _id, string _marca, float _probAvaria, int _x, int _y, float _valor);
        virtual ~Sensor();

        float getVALOR() const;
};

#endif // SENSOR_H
