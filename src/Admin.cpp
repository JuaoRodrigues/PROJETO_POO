#include "Admin.h"

Admin::Admin()
{
    //ctor
}

Admin::~Admin()
{
    //dtor
}

Admin::Admin(int _id, string _nome)
: Normal(_id, _nome)
{
    poderREMOVER = true;
}
