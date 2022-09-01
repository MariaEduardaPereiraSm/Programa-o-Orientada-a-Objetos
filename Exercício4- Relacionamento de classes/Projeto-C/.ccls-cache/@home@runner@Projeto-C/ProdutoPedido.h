#ifndef ProdutoPedido_H
#define ProdutoPedido_H
#include <iostream>
#include <string>

using namespace std;

class ProdutoPedido{
//Atributos
 public:
  string nomeProduto;
  int valorUnitario;
  int quantidade;

//Construtor
 ProdutoPedido();

//Metodos
  void setNOMEPRODUTO(string novoNomeProduto);
  void setVALORUNITARIO(int novoValorUnitario);
  void setQUANTIDADE(int novaQuantidade);
  string getNOMEPRODUTO();
  int getVALORUNITARIO();
  int getQUANTIDADE();
};
#endif