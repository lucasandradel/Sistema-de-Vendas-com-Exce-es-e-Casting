#ifndef VESTUARIO_H
#define VESTUARIO_H

#include "item.h"

class Vestuario : public Item {
private:
    string tamanho;

public:
    // Construtores
    Vestuario();
    Vestuario(const string& cod, double pre, int estq, const string& tam);

    // Setter e getter para o atributo específico de Vestuario
    void setTamanho(const string&);
    string getTamanho() const;

    // Sobrescreve o método listarInformacoes
    void listarInformacoes() const override;
};


#endif
