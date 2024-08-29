#ifndef FUNCOES_H
#define FUNCOES_H

#include "item.h"
#include <memory>
#include <vector>
// Função para simular a venda de um item
void simularVenda(Item* item, int quantidade);

// Função para exibir todos os itens no estoque
void exibirEstoque(const vector<unique_ptr<Item>>& produtos);

#endif // FUNCOES_H
