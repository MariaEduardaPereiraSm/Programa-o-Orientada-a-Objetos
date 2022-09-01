#include <iostream>
#include <string>
#include <cstdlib>

#include "Cliente.h"
#include "Endereco.h"
#include "Pedido.h"
using namespace std;

int main(){ 
  string novoNome, novaRua, novoBairro, novaReferencia, novoTelefone, novoNumeroResidencia, novaData, novoHorario;
  int quantidadeSalgado, quantidadeBebida, quantidadeDoce, valorUnitario;
  //dados pessoais
  cout << "Vamos iniciar o seu pedido...\nDigite os seus dados a seguir:" << endl;
  cout << "Nome: ";
  getline(cin, novoNome);
  cout << "Telefone: ";
  getline(cin, novoTelefone);
  cout << "Rua: ";
  getline(cin, novaRua);
  cout << "Bairro:";
  getline(cin, novoBairro);
  cout << "Referencia: ";
  getline(cin, novaReferencia);
  cout << "Número da Residência: ";
  getline(cin, novoNumeroResidencia);

  //dados do pedido
  cout << "Data:";
  getline(cin, novaData);
  cout << "Horario:";
  getline(cin, novoHorario);
      
  //criando objeto endereco
  Endereco endereco1;
  endereco1.setRUA(novaRua);
  endereco1.setNUMEROCASA(novoNumeroResidencia);
  endereco1.setBAIRRO(novoBairro);
  endereco1.setREFERENCIA(novaReferencia);

  //criando objeto produtopedido
  ProdutoPedido produto1;
  
  //criando objeto pedido
  Pedido pedido1;
  pedido1.setDATA(novaData);
  pedido1.setHORARIO(novoHorario);
  
  //selecao do pedido e atribuindo valores aos dados necessários
  cout << "\n---------Tabela de Preços--------\n"<< endl;
  cout << "\nSalgado-------------------R$5.00\n"<< endl;
  cout << "Bebida--------------------R$3.00\n"<< endl;
  cout << "Doce----------------------R$4.00\n"<< endl;
  cout << "\n--------Peça sua comida--------:\n" << endl;
  
  cout << "Quantidade de salgados desejada:";
  cin >> quantidadeSalgado;
  produto1.setNOMEPRODUTO("Salgado");
  produto1.setQUANTIDADE(quantidadeSalgado);
  produto1.setVALORUNITARIO(5);
  pedido1.calcularValorTotal(produto1.getQUANTIDADE(), produto1.getNOMEPRODUTO(), produto1.getVALORUNITARIO());
  pedido1.listaDeProdutos(produto1.getQUANTIDADE(), produto1.getNOMEPRODUTO(), produto1.getVALORUNITARIO());
  cout << "Quantidade de bebidas desejada:";
  cin >> quantidadeBebida;
  produto1.setNOMEPRODUTO("Bebida");
  produto1.setQUANTIDADE(quantidadeBebida);
  produto1.setVALORUNITARIO(3);
  pedido1.calcularValorTotal(produto1.getQUANTIDADE(), produto1.getNOMEPRODUTO(), produto1.getVALORUNITARIO());
  pedido1.listaDeProdutos(produto1.getQUANTIDADE(), produto1.getNOMEPRODUTO(), produto1.getVALORUNITARIO());
  cout << "Quantidade de doces desejada:";
  cin >> quantidadeDoce;
  produto1.setNOMEPRODUTO("Doce");
  produto1.setQUANTIDADE(quantidadeDoce);
  produto1.setVALORUNITARIO(4);
  pedido1.calcularValorTotal(produto1.getQUANTIDADE(), produto1.getNOMEPRODUTO(), produto1.getVALORUNITARIO());
  pedido1.listaDeProdutos(produto1.getQUANTIDADE(), produto1.getNOMEPRODUTO(), produto1.getVALORUNITARIO());
  
  //criando objeto cliente
  Cliente cliente1;
  cliente1.setNOME(novoNome);
  cliente1.setTELEFONE(novoTelefone);

  //mostrando resultados do pedido:
  cout << "\n---Seu pedido foi finalizado com sucesso!---\n"<< endl;
  cout << "----Dados pessoais do comprador----" <<endl;
  cout << "Nome: "<< cliente1.getNOME() << endl;
  cout << "Telefone: " << cliente1.getTELEFONE() << endl;
  
  cout << "\n--------Endereço do comprador--------" <<endl;
  cout << "Rua: " << endereco1.getRUA() <<endl;
  cout << "Casa: " << endereco1.getNUMEROCASA() <<endl;
  cout << "Bairro: " << endereco1.getBAIRRO() <<endl;
  cout << "Referencia: " << endereco1.getREFERENCIA() <<endl;
  
  cout << "\n----------Dados de entrega------------" <<endl;
  cout << "Data do pedido: " << pedido1.getDATA() <<endl;
  cout << "Horário da execução do pedido: " << pedido1.getHORARIO() <<endl;
  cout << "Seu pedido será entregue em 30 minutos." <<endl;
  
  cout << "\n---------------Recibo do pedido--------" <<endl;
  pedido1.mostrarRecibo();
  cout << "Total a pagar R$: " << pedido1.getVALORTOTAL()<< endl;
  cout << "---------------------------------------" <<endl;
  cout << "\nObrigada pela preferência...Volte sempre!" <<endl;
    
  return 0;
}