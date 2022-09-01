#ifndef CLIENTE_H
#define CLIENTE_H
#include "ENDERECO.h"
#include "PEDIDO.h"

#include <iostream>
#include <string>
using namespace std;

class CLIEN{

  public:
    string nome;
    string endereco;
    string telefone;

    Cliente(string novoNome, string novoEndereco, string novoTelefone){
      nome = novoNome;
      endereco = novoEndereco;
      telefone = novoTelefone;
    }
}; 
#endif