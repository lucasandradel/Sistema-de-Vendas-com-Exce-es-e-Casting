#include "funcoes.h"
#include <vector>
#include <stdexcept>
#include <iostream>

using namespace std;

// Função para simular a venda de um item
void simularVenda(Item* item, int quantidade) {
    if (quantidade > item->getEstoque()) {
        throw runtime_error("Quantidade em estoque insuficiente para a venda.");
    }

    // Calcula o valor total da venda
    double valorVenda = item->getPreco() * quantidade;

    // Atualiza o estoque após a venda
    item->setEstoque(item->getEstoque() - quantidade);

    // Exibe o valor da venda
    cout << "Venda realizada com sucesso!" << endl;
    cout << "Valor total: R$ " << valorVenda << endl;
}

// Função para exibir todos os itens no estoque
void exibirEstoque(const vector<unique_ptr<Item>>& produtos) {
    if (produtos.empty()) {
        cout << "Nenhum item no estoque." << endl;
        return;
    }

    cout << "Itens no estoque:" << endl;
    for (const auto& produto : produtos) {
        produto->listarInformacoes();
    }
}
