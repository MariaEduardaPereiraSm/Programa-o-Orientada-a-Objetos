#ifndef Pedido_H
#define Pedido_H

#include <iostream>
#include <string>
#include <vector>
#include "ProdutoPedido.h"
using namespace std;

class Pedido{

  public:
    string data;
    string horario;
    double valorTotal;
    ProdutoPedido produto;

    Pedido();

    void setDATA(string novaData);
    void setHORARIO(string novoHorario);
    void setVALORTOTAL(double novoValorTotal);
    string getDATA();
    string getHORARIO();
    double getVALORTOTAL();
    vector<string> listaProduto;
    void listaDeProdutos(int novaQuantidade, string novoNomeProduto, int valorUnitario);
    void mostrarRecibo();
    double calcularValorTotal(int novaQuantidade, string novoNomeProduto, int valorUnitario);
}; 
#endif