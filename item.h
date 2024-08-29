#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

using namespace std;

class Item {
private:
    std::string codigo;
    double preco;
    int qtdEstoque;

public:
    // Construtores
    Item();
    Item(const std::string& cod, double pre, int estq);

    // Setters
    void setCodigo(const std::string&);
    void setPreco(double);
    void setEstoque(int);

    // Getters
    std::string getCodigo() const;
    double getPreco() const;
    int getEstoque() const;

     // Método virtual para listar informações do item
    virtual void listarInformacoes() const;
    virtual ~Item() = default; // Virtual destructor for polymorphic base class
};

#endif
