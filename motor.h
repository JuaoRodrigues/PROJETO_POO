#ifndef MOTOR_H
#define MOTORH

#include <string>
#include <iostream>

// Estados típicos definidos para os motores[cite: 1]
enum EstadoMotor { STOP, START, RUN, AVARIADO };

// Classes de temperatura do motor[cite: 1]
enum ClasseTemperatura { VERDE, AMARELO, VERMELHO };

class Motor {
protected:
    // Atributos base do motor[cite: 1]
    int id;
    std::string marca;
    float consumo_hora;
    float temperatura_aviso;
    float temperatura_paragem;
    float probabilidade_avaria;
    
    // Cada dispositivo (incluindo o motor) está numa dada posição (X, Y)[cite: 1]
    int posX; 
    int posY;

    // Variáveis de controlo interno
    EstadoMotor estado_atual;
    float temperatura_atual;

public:
    // Construtor
    Motor(int id, std::string marca, float consumo_hora, float temp_aviso, float temp_paragem, float prob_avaria, int x, int y);

    // Destrutor virtual: crucial para evitar a penalização de 5 valores na gestão de memória ao usar herança
    virtual ~Motor();

    // Métodos que podem ser re-implementados por motores específicos (daí o "virtual")[cite: 1]
    virtual void Start();
    virtual void Run();
    virtual void Stop();
    virtual void Restart();
    virtual ClasseTemperatura Estou_Quente(); 
};

#endif
