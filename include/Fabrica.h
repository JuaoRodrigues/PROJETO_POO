#ifndef FABRICA_H
#define FABRICA_H

#include <iostream>
#include <string>
#include <list>

#include "Utilizador.h"
#include "Motor.h"
#include "Sensor.h"

using namespace std;

class Fabrica
{
    // utilizador que esta a usar o programa
    Utilizador *utilizadorAtual;

    // listas de objetos da fabrica
    list<Utilizador *>  Lutilizadores;
    list<Motor *>       Lmotores;
    list<Sensor *>      Lsensor;

    // horario da fabrica
    int horaAbertura;
    int HoraEncerramento;

    public:
        Fabrica();
        Fabrica(Utilizador *ut);
        virtual ~Fabrica();
};

#endif // FABRICA_H
