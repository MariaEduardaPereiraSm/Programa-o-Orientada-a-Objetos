#include "PessoaFisica.h"
#include <string>
#include <iostream>

using namespace std;

PessoaFisica::PessoaFisica(string nome, string endereco, string novocpf, string novadata_a) : Pessoa(nome,endereco){
   this -> cpf = novocpf;
   this -> data_a = novadata_a;
}

string PessoaFisica::GETCPF(){
  return  this -> cpf;
}

string PessoaFisica::GETDATA(){
  return  this -> data_a;
}

void PessoaFisica::SETCPF(string novocpf){
    this -> cpf = novocpf;
}

void PessoaFisica::SETDATA(string novadata_a){
    this -> data_a = novadata_a;
}
void PessoaFisica::tostring(){
  cout << "Dados Pessoa Fisica" << endl;
  cout << GETNOME()<< endl;
  cout << GETENDERECO() << endl;
  cout << GETDATA()<< endl;
  cout << GETCPF()<< endl;
}