#include "Agenda.h"
#include <iostream>
#include <string>
using namespace std;

Agenda::Agenda(PessoaFisica *pf, PessoaJuridica *pj){
  this -> pf =  pf;
  this -> pj = pj;
}

string Agenda::BuscarContato(string novonome){
  for(int i =0; i<=1;i++){
    if(pj[i].nome.compare(novonome)==0){
      pj[i].tostring();
    }
    if(pf[i].nome.compare(novonome)==0){
      pf[i].tostring();
    }
    else{
      cout << "O contato não existe na agenda";
    }
  }
}