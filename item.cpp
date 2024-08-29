#include "item.h"

Item::Item() : codigo(""), preco(0.0), qtdEstoque(0) {}

Item::Item(const string& cod, double pre, int estq) : codigo(cod), preco(pre), qtdEstoque(estq) {}


// Implementação dos setters
void Item::setCodigo(const string& cod) {
    codigo = cod;
}

void Item::setPreco(double pre) {
    preco = pre;
}

void Item::setEstoque(int estq) {
    qtdEstoque = estq;
}

// Implementação dos getters
string Item::getCodigo() const {
    return codigo;
}

double Item::getPreco() const {
    return preco;
}

int Item::getEstoque() const {
    return qtdEstoque;
}

void Item::listarInformacoes() const {
    cout << "Código: " << codigo << ", Preço: " << preco << ", Estoque: " << qtdEstoque;
}