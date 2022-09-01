#include "PessoaJuridica.h"
#include <iostream>
#include <string>

using namespace std;

PessoaJuridica::PessoaJuridica(string nome, string endereco, string novocnpj, string novonome_f, float novofaturamento) : Pessoa(nome, endereco){
  this -> cnpj = novocnpj;
  this -> nome_f = novonome_f;
  this -> faturamento = novofaturamento;
}

string PessoaJuridica::GETCNPJ(){
  return this-> cnpj;
}

string PessoaJuridica::GETNOMEF(){
  return this-> nome_f;
}

float PessoaJuridica::GETFATURAMENTO(){
  return this-> faturamento;
}

void PessoaJuridica::SETCNPJ(string novocnpj){
  this -> cnpj = novocnpj;
}

void PessoaJuridica::SETNOMEF(string novonomef){
  this -> nome_f = novonomef;
}

void PessoaJuridica::SETFATURAMENTO(float novofaturamento){
  this -> faturamento = novofaturamento;
}

void PessoaJuridica::tostring(){
  cout << "Dados Pessoa Juridica" << endl;
  cout << GETNOME()<< endl;
  cout << GETENDERECO() << endl;
  cout << GETCNPJ() << endl;
  cout << GETNOMEF() << endl;
}