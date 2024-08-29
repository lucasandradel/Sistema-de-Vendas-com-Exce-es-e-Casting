#include "vestuario.h"

// Implementação dos construtores
Vestuario::Vestuario() : Item(), tamanho("") {}

Vestuario::Vestuario(const std::string& cod, double pre, int estq, const std::string& tam)
    : Item(cod, pre, estq), tamanho(tam) {}

// Implementação dos setters e getters
void Vestuario::setTamanho(const std::string& tam) {
    tamanho = tam;
}

std::string Vestuario::getTamanho() const {
    return tamanho;
}

void Vestuario::listarInformacoes() const {
    Item::listarInformacoes();
    cout << ", Tamanho: " << tamanho << endl;
}