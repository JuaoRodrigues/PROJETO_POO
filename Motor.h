#ifndef MOTOR_H
#define MOTOR_H

#include "Comum.h"

//Motor: herda de Comum e acrescenta apenas o que e so dele.

class Motor : public Comum
{
    float CONSUMO_HORA;
    float TEMPERATURA_AVISO;
    float TEMPERATURA_PARAGEM;

    public:
        Motor();
        Motor(int _id, string _marca, float _probAvaria, int _x, int _y,
              float _consumoHora, float _tempAviso, float _tempParagem);
        virtual ~Motor();

        float getCONSUMO_HORA() const;
        float getTEMPERATURA_AVISO() const;
        float getTEMPERATURA_PARAGEM() const;

    protected:

    private:
};

#endif // MOTOR_H
