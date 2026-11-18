#ifndef UTILIZADOR_H
#define UTILIZADOR_H

#include <iostream>
#include <string>

using namespace std;

class Utilizador
{
    int ID;
    string NOME;

    // as permissoes sao protected para poderem ser alteradas pelas seguintes subclasses
    protected:
        // PERMISSÕES DE CADA TIPO DE UTILIZADOR
        bool poderADICIONAR;
        bool poderREMOVER;
        bool poderLISTAR;
        bool poderRUN;
        bool poderMANUTENCAO;
    public:
        Utilizador();
        Utilizador(int _id, string _nome);
        virtual ~Utilizador();
        int getID()             { return ID; }
        string getNome()        { return NOME; }

        // saber as permissoes
        bool getADICIONAR()     { return poderADICIONAR; }
        bool getREMOVER()       { return poderREMOVER; }
        bool getLISTAR()        { return poderLISTAR; }
        bool getRUN()           { return poderRUN; }
        bool getMANUTENCAO()    { return poderMANUTENCAO; }
};

#endif // UTILIZADOR_H
