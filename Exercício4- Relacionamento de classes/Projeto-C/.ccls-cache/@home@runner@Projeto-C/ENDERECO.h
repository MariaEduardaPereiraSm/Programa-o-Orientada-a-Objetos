#ifndef ENDERECO_H
#define ENDERECO_H


#include <iostream>
#include <string>
using namespace std;

class Endereco{

  public:
    string rua;
    string numero_residencia;
    string bairro;
    string referencia;

    Endereco(string novaRua, string novoNumero_residencia, string novoBairro, string novaReferencia){
      rua = novaRua;
      numero_residencia = novoNumero_residencia;
      bairro = novoBairro;
      referencia = novaReferencia;
      
    }
    

    
}; 
#endif