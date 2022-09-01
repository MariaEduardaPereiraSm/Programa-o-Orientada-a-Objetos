#include <iostream>
#include "ProdutoPedido.h"
#include <string.h>
using namespace std;

ProdutoPedido::ProdutoPedido(){
  this -> nomeProduto = "";
  this -> valorUnitario = 0;
  this -> quantidade = 0;
 }

void ProdutoPedido::setNOMEPRODUTO(string novoNomeProduto){
  this -> nomeProduto = novoNomeProduto;
 }

void ProdutoPedido::setVALORUNITARIO(int novoValorUnitario){
  this -> valorUnitario = novoValorUnitario;
 } 

 void ProdutoPedido::setQUANTIDADE(int novaQuantidade){
   this -> quantidade = novaQuantidade;
 }

 string ProdutoPedido::getNOMEPRODUTO(){
   return this -> nomeProduto;
 }
  
int ProdutoPedido::getVALORUNITARIO(){
   return this -> valorUnitario;
 }
 int ProdutoPedido::getQUANTIDADE(){
   return this -> quantidade;
 }