#include <iostream>
#include <string>
#include "Endereco.h"
using namespace std;

Endereco::Endereco(){
  this->rua = "";
  this->numeroResidencia = "";
  this->bairro = "";
  this->referencia = "";
  
}
void Endereco::setRUA(string novaRua){
  this->rua = novaRua;
}

void Endereco::setNUMEROCASA(string novoNumeroResidencia){
  this->numeroResidencia = novoNumeroResidencia;
}

void Endereco::setBAIRRO(string novoBairro){
  this->bairro = novoBairro;
}

void Endereco::setREFERENCIA(string novaReferencia){
  this->referencia = novaReferencia;
}

string Endereco::getRUA(){
  return this->rua;
}

string Endereco::getNUMEROCASA(){
  return this->numeroResidencia;
}

string Endereco::getBAIRRO(){
  return this->bairro;
}

string Endereco::getREFERENCIA(){
  return this->referencia;
}