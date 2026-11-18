#include "Fabrica.h"

Fabrica::Fabrica()
{
    //ctor
}

Fabrica::~Fabrica()
{
    // apagar os utilizadores
    list<Utilizador *>::iterator itU;
    for(itU = Lutilizadores.begin(); itU != Lutilizadores.end(); itU++)
        delete *itU;
    Lutilizadores.clear();

    // apagar os motores
    list<Motor *>::iterator itM;
    for(itM = Lmotores.begin(); itM != Lmotores.end(); itM++)
        delete *itM;
    Lmotores.clear();

    // apagar os sensores
    list<Sensor *>::iterator itS;
    for(itS = Lsensor.begin(); itS != Lsensor.end(); itS++)
        delete *itS;
    Lsensor.clear();
}

Fabrica::Fabrica(Utilizador *ut)
{
    utilizadorAtual = ut;
    horaAbertura = 8;
    HoraEncerramento = 18;
}
