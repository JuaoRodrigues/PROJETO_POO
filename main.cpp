#include <iostream>

using namespace std;

#include "Admin.h"
#include "Motor.h"

#include "SensorFumo.h"
#include "SensorHumidade.h"
#include "SensorLuz.h"
#include "SensorMissel.h"
#include "MotorCombustao.h"
#include "MotorEletrico.h"

int main()
{

    cout << "---------- TESTES DE UTILIZADORES ----------" << endl;
    Visitante *u = new Visitante(1, "ANA");

    cout << u->getNome() << endl;
    cout << "Listar:        " << u->getLISTAR()      << endl;
    cout << "Adicionar:     " << u->getADICIONAR()   << endl;
    cout << "Run:           " << u->getRUN()         << endl;
    cout << "Manutencao:    " << u->getMANUTENCAO()  << endl;
    cout << "Remover:       " << u->getREMOVER()     << endl;

    cout << endl << endl;
    Normal *n = new Normal(2, "LUIS");

    cout << n->getNome() << endl;
    cout << "Listar:        " << n->getLISTAR()      << endl;
    cout << "Adicionar:     " << n->getADICIONAR()   << endl;
    cout << "Run:           " << n->getRUN()         << endl;
    cout << "Manutencao:    " << n->getMANUTENCAO()  << endl;
    cout << "Remover:       " << n->getREMOVER()     << endl;

    cout << endl << endl;

    Admin *a = new Admin(3, "ZE");
    cout << a->getNome() << endl;
    cout << "Listar:        " << a->getLISTAR()      << endl;
    cout << "Adicionar:     " << a->getADICIONAR()   << endl;
    cout << "Run:           " << a->getRUN()         << endl;
    cout << "Manutencao:    " << a->getMANUTENCAO()  << endl;
    cout << "Remover:       " << a->getREMOVER()     << endl;

    cout << endl << endl;

    cout << "---------- TESTES DE MAQUINAS ----------" << endl;

    Sensor *s = new SensorFumo(2, "xansung", 50, 10, 20, 2);

    cout << "ID :           " << s->getID() << endl;
    cout << "Tipo:          " << s->GetTipo() << endl;
    cout << "Marca :        " << s->getMARCA() << endl;
    cout << "Prob Avaria :  " << s->getPROBABILIDADE_AVARIA() << endl;
    cout << "Posicao :      (" << s->getX() << "," << s->getY() << ")" << endl;
    cout << "Valor :  " << s->getVALOR() << endl;

    Motor *m = new MotorCombustao(3, "aipole", 70, 20, 30, 12, 33, 35);
    cout << "ID :           " << m->getID() << endl;
    cout << "Tipo :         " << m->GetTipo() << endl;
    cout << "Marca :        " << m->getMARCA() << endl;
    cout << "Prob Avaria :  " << m->getPROBABILIDADE_AVARIA() << endl;
    cout << "Posicao :      (" << m->getX() << "," << s->getY() << ")" << endl;
    cout << "Consumo Hora : " << m->getCONSUMO_HORA() << endl;
    cout << "Temp Aviso :   " << m->getTEMPERATURA_AVISO() << endl;
    cout << "Temp Paragem : " << m->getTEMPERATURA_PARAGEM() << endl;

    return 0;
}
