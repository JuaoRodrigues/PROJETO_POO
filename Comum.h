#ifndef COMUM_H
#define COMUM_H

#include <iostream>
#include <string>

using namespace std;

class Comum
{
    int ID;
    string MARCA;
    float PROBABILIDADE_AVARIA;
    int X;
    int Y;

    public:
        Comum();
        Comum(int _id, string _marca, float _probAvaria, int _x, int _y);
        virtual ~Comum();

        int getID() {return ID};
        string getMARCA() {return MARCA};
        float getPROBABILIDADE_AVARIA() {return PROBABILIDADE_AVARIA};
        int getX() {return X};
        int getY() {return Y};
};

#endif // COMUM_H
