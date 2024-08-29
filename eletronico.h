#ifndef ELETRONICO_H
#define ELETRONICO_H

#include "item.h"

class Eletronico : public Item {
private:
    int garantiaMeses;

public:
    // Construtores
    Eletronico();
    Eletronico(const std::string& cod, double pre, int estq, int garantia);

    // Setter e getter para o atributo específico de Eletronico
    void setGarantiaMeses(int);
    int getGarantiaMeses() const;

    // Sobrescreve o método listarInformacoes
    void listarInformacoes() const override;
};

#endif
