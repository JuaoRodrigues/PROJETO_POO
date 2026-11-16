#ifndef UTILIZADOR_H
#define UTILIZADOR_H

#include <iostream>
#include <string>

using namespace std;

class Utilizador
{
    int ID;
    string NOME;
    public:
        Utilizador();
        Utilizador(int _id, string _nome);
        virtual ~Utilizador();
        int getID() { return ID; }
        string getNome() { return NOME; }

        // PERMISSÕES DE CADA TIPO DE UTILIZADOR
        virtual bool poderADICIONAR() = 0;
        virtual bool poderREMOVER() = 0;
        virtual bool poderLISTAR() = 0;
        virtual bool poderRUN() = 0;
        virtual bool poderMANUTENCAO() = 0;
};

#endif // UTILIZADOR_H
