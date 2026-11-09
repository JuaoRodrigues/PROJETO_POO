#include "Motor.h"

// Implementação do Construtor
Motor::Motor(int id, std::string marca, float consumo_hora, float temp_aviso, float temp_paragem, float prob_avaria, int x, int y) {
    this->id = id;
    this->marca = marca;
    this->consumo_hora = consumo_hora;
    this->temperatura_aviso = temp_aviso;
    this->temperatura_paragem = temp_paragem;
    this->probabilidade_avaria = prob_avaria;
    this->posX = x;
    this->posY = y;
    
    // O motor inicia naturalmente parado e frio
    this->estado_atual = STOP;
    this->temperatura_atual = 20.0f; 
}

// Implementação do Destrutor
Motor::~Motor() {
    // Como neste exemplo básico não alocámos memória dinâmica (com 'new') dentro do construtor, 
    // não há 'delete' a fazer aqui. Mas se o motor tivesse, por exemplo, uma lista interna 
    // de peças dinâmicas, seria aqui que libertarias essa memória explicitamente[cite: 3].
}

void Motor::Start() {
    if (estado_atual != AVARIADO) {
        estado_atual = START;
    }
}

void Motor::Run() {
    // Só pode passar a RUN se não estiver avariado
    if (estado_atual == START || estado_atual == STOP) {
        estado_atual = RUN;
    }
}

void Motor::Stop() {
    estado_atual = STOP;
}

void Motor::Restart() {
    Stop();
    Start();
    Run();
}

// Lógica de avaliação da temperatura
ClasseTemperatura Motor::Estou_Quente() {
    // VERMELHO: O motor está bem quente, deve ser avisado o Gestor e passar a STOP[cite: 1]
    if (temperatura_atual >= temperatura_paragem) {
        Stop(); // Auto-proteção imediata[cite: 1]
        return VERMELHO;
    } 
    // AMARELO: O motor está a aquecer, deve ser enviado um aviso ao gestor[cite: 1]
    else if (temperatura_atual >= temperatura_aviso) {
        return AMARELO;
    }
    // VERDE: A funcionar bem[cite: 1]
    return VERDE;
}
