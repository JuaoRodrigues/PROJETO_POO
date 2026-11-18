#include "Comum.h"

Comum::Comum()
{
    ID = 0;
    MARCA = "";
    PROBABILIDADE_AVARIA = 0;
    X = 0;
    Y = 0;
}

Comum::Comum(int _id, string _marca, float _probAvaria, int _x, int _y)
{
    ID = _id;
    MARCA = _marca;
    PROBABILIDADE_AVARIA = _probAvaria;
    X = _x;
    Y = _y;
}

Comum::~Comum()
{
    //dtor
}
