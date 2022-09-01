#include "Pessoa.h"

Pessoa::Pessoa(string novonome, string novoendereco){
  this -> nome = novonome;
  this -> endereco = novoendereco;
}

void Pessoa::SETNOME(string novonome){
  this -> nome = novonome;
}

void Pessoa::SETENDERECO(string novoendereco){
  this -> endereco = novoendereco;
}

string Pessoa::GETNOME(){
  return this-> nome;
}
string Pessoa::GETENDERECO(){
  return this-> endereco;
}