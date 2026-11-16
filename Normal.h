#ifndef NORMAL_H
#define NORMAL_H

#include "Visitante.h"

#include <iostream>

using namespace std;

class Normal : public Utilizador
{
    public:
        Normal();
        Normal(int _id, string _nome);
        virtual ~Normal();

        // PERMISSÕES DE NORMAL
        // PODE FAZER O QUE O VISITANTE FAZ +
        virtual bool poderADICIONAR()   { return true; }
        virtual bool poderRUN()         { return true; }
        virtual bool poderMANUTENCAO()  { return true; }
};

#endif // NORMAL_H
