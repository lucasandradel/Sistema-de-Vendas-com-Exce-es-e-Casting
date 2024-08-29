#include <iostream>
#include <vector>
#include <memory>
#include "eletronico.h"
#include "vestuario.h"
#include "funcoes.h"

using namespace std;

int main() {
    vector<unique_ptr<Item>> produtos;
    int opcao;

    do {
        // Exibe o menu
        cout << "\nMenu:\n";
        cout << "1. Cadastrar Produto\n";
        cout << "2. Simular Venda\n";
        cout << "3. Exibir Estoque\n";
        cout << "4. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                // Cadastrar produto
                int tipoProduto;
                cout << "Digite o tipo de produto (1-Eletronico, 2-Vestuario): ";
                cin >> tipoProduto;

                if (tipoProduto == 1) {
                    // Cadastra um produto eletrônico
                    string codigo;
                    double preco;
                    int estoque, garantia;
                    cout << "Codigo: "; cin >> codigo;
                    cout << "Preco: "; cin >> preco;
                    cout << "Estoque: "; cin >> estoque;
                    cout << "Garantia (meses): "; cin >> garantia;
                    produtos.push_back(make_unique<Eletronico>(codigo, preco, estoque, garantia));
                } else if (tipoProduto == 2) {
                    // Cadastra um produto de vestuário
                    string codigo, tamanho;
                    double preco;
                    int estoque;
                    cout << "Codigo: "; cin >> codigo;
                    cout << "Preco: "; cin >> preco;
                    cout << "Estoque: "; cin >> estoque;
                    cout << "Tamanho: "; cin >> tamanho;
                    produtos.push_back(make_unique<Vestuario>(codigo, preco, estoque, tamanho));
                } else {
                    cout << "Tipo de produto invalido!" << endl;
                }
                break;
            }
            case 2: {
                // Simular venda
                string codigoProduto;
                int quantidade;
                cout << "Digite o codigo do produto para venda: ";
                cin >> codigoProduto;
                cout << "Digite a quantidade a ser vendida: ";
                cin >> quantidade;

                // Procura o produto no vetor
                bool encontrado = false;
                for (const auto& produto : produtos) {
                    if (produto->getCodigo() == codigoProduto) {
                        try {
                            simularVenda(produto.get(), quantidade);
                        } catch (const runtime_error& e) {
                            cerr << "Erro na venda: " << e.what() << endl;
                        }
                        encontrado = true;
                        break;
                    }
                }

                if (!encontrado) {
                    cout << "Produto nao encontrado." << endl;
                }
                break;
            }
            case 3: {
                // Exibir estoque
                exibirEstoque(produtos);
                break;
            }
            case 4:
                cout << "Saindo do programa." << endl;
                break;

            default:
                cout << "Opcao invalida. Tente novamente." << endl;
                break;
        }

    } while (opcao != 4);

    return 0;
}
