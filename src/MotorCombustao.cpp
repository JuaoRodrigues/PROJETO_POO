#include "MotorCombustao.h"

MotorCombustao::MotorCombustao()
{
    //ctor
}

MotorCombustao::~MotorCombustao()
{
    //dtor
}

MotorCombustao::MotorCombustao(int _id, string _marca, float _probAvaria, int _x, int _y, float _consumoHora, float _tempAviso, float _tempParagem)
: Motor(_id, _marca, _probAvaria, _x, _y, _consumoHora, _tempAviso, _tempParagem)
{

}
