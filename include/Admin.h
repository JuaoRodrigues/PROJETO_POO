#ifndef ADMIN_H
#define ADMIN_H

#include "Normal.h"
#include <iostream>

using namespace std;

class Admin : public Normal
{
    public:
        Admin();
        Admin(int _id, string _nome);
        virtual ~Admin();
};

#endif // ADMIN_H
