#ifndef VISITANTE_H
#define VISITANTE_H

#include "Utilizador.h"

#include <iostream>

using namespace std;

// Visitante: utilizador que só pode LISTAR
class Visitante : public Utilizador
{
    public:
        Visitante();
        Visitante(int _id, string _nome);
        virtual ~Visitante();
};

#endif // VISITANTE_H
