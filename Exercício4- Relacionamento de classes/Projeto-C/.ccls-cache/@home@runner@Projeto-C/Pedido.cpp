#include "Pedido.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Pedido::Pedido(){
  this->valorTotal = 0;
  this->data = " ";
  this->horario = " ";
}

double Pedido::calcularValorTotal(int novaQuantidade, string novoNomeProduto, int valorUnitario){
  if(novoNomeProduto == "Salgado"){
    this->valorTotal = 0;
    this->valorTotal += (valorUnitario*novaQuantidade);
    }
  else if(novoNomeProduto == "Bebida"){
      this->valorTotal += (valorUnitario*novaQuantidade);
    }
  else{
      this->valorTotal += ((valorUnitario*novaQuantidade));
    }
  return this->valorTotal;
}

void Pedido::listaDeProdutos(int novaQuantidade, string novoNomeProduto, int valorUnitario){
  string nq = " " + to_string(novaQuantidade);
  string vu = " " + to_string(valorUnitario);
  if(novaQuantidade > 0){
    for(int i=0; i<1; i++){
      this->listaProduto.push_back(novoNomeProduto);
      this->listaProduto.push_back(nq);
      this->listaProduto.push_back(vu);
      }
    }
}

void Pedido::mostrarRecibo(){
  for(int i=0; i<this->listaProduto.size(); i+=3){
    cout << "Produto:" << listaProduto[i] << endl;
    cout << "Quantidade:" << listaProduto[i+1] << endl;
    cout << "Valor Unitário:" << listaProduto[i+2] << endl;
    cout << endl;
  }
}

void Pedido::setVALORTOTAL(double novoValorTotal){
  this->valorTotal = novoValorTotal;
}

double Pedido::getVALORTOTAL(){
  return this->valorTotal;
}

void Pedido::setDATA(string novaData){
  this->data = novaData;
}

string Pedido::getDATA(){
  return this->data;
}

void Pedido::setHORARIO(string novoHorario){
  this->horario = novoHorario;
}

string Pedido::getHORARIO(){
  return this->horario;
}

