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

        // PERMISSÕES DE VISITANTE
        // APENAS PODE LISTAR
        virtual bool poderADICIONAR()   { return false; }
        virtual bool poderREMOVER()     { return false; }
        virtual bool poderLISTAR()      { return true; }
        virtual bool poderRUN()         { return false; }
        virtual bool poderMANUTENCAO()  { return false; }
};

#endif // VISITANTE_H
