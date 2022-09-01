#ifndef Cliente_H
#define Cliente_H
#include <iostream>
#include <string>
#include "Endereco.h"
#include "Pedido.h"
using namespace std;

class Cliente{

  public:
    //atributos e construtor padrão
    string nome;
    string telefone;
    Endereco endereco;
    Pedido pedido;
    Cliente();

    //métodos ou funções dos atributos 
    void setNOME(string novoNome);
    void setTELEFONE(string novoTelefone);
    void setENDERECO(Endereco endereco1);
    void setPEDIDO(Pedido);
    string getNOME();
    string getTELEFONE();
    Endereco getENDERECO();
    Pedido getPEDIDO();
        
}; 
#endif