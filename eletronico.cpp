#include "eletronico.h"

// Implementação dos construtores
Eletronico::Eletronico() : Item(), garantiaMeses(0) {}

Eletronico::Eletronico(const std::string& cod, double pre, int estq, int garantia): Item(cod, pre, estq), garantiaMeses(garantia) {}

// Implementação dos setters e getters
void Eletronico::setGarantiaMeses(int garantia) {
    garantiaMeses = garantia;
}

int Eletronico::getGarantiaMeses() const {
    return garantiaMeses;
}

void Eletronico::listarInformacoes() const {
    Item::listarInformacoes();
    cout << ", Garantia: " << garantiaMeses << " meses" << endl;
}
