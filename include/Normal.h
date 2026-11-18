#ifndef NORMAL_H
#define NORMAL_H

#include "Visitante.h"

#include <iostream>

using namespace std;

class Normal : public Visitante
{
    public:
        Normal();
        Normal(int _id, string _nome);
        virtual ~Normal();
};

#endif // NORMAL_H
