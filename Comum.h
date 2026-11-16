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

        int getID() const;
        string getMARCA() const;
        float getPROBABILIDADE_AVARIA() const;
        int getX() const;
        int getY() const;
};

#endif // COMUM_H
