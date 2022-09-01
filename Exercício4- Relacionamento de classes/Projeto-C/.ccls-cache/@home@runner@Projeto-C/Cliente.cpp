#include <iostream>
#include <string>
#include "Cliente.h"
using namespace std;

Cliente::Cliente(){
  this->nome = "";
  this->telefone = "";
}

void Cliente::setNOME(string novoNome){
  this->nome=novoNome;
}
string Cliente::getNOME(){
    return this->nome;
}
void Cliente::setTELEFONE(string novoTelefone){
  this->telefone=novoTelefone;
}
string Cliente::getTELEFONE(){
  return this->telefone;
}