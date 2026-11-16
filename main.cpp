#include <iostream>

using namespace std;

#include "Visitante.h"
#include "Normal.h"

int main()
{
    Utilizador *u = new Visitante(1, "ANA");

    cout << u->getNome() << endl;
    cout << "Remover: " << u->poderREMOVER() << endl;
    cout << "Listar: " << u->poderLISTAR() << endl;

    Normal *n = new Normal(2, "LUIS");

    cout << n->getNome() << endl;
    cout << "Remover: " << n->poderREMOVER() << endl;
    cout << "Listar: " << n->poderADICIONAR() << endl;

    return 0;
}
