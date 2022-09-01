#include "Data.h"
#include <string>
#include <iostream>

using namespace std;
//construtor

Data::Data(int novodia, int novomes, int novoano){
    this -> dia = novodia;
    this -> mes = novomes;
    this -> ano = novoano;
}

int Data::NovaData(int novodia, int novomes, int novoano){
  int d = novodia+1;
  int m = novomes;
  int a = novoano;
  if(novodia>31){
      d = 1;
      m = mes+1;
      this -> dia = d;
      if(m==13){
        m=1;
        }}

    this -> dia = d;
    this -> mes = m;
    this -> ano = a; 
}

int Data::VerificaData(int dia, int mes, int ano){
  if(dia<=0 || dia>31 || mes<=0 || mes>12 || ano<0){
    cout << "Os valores não são válidos";
    }
}

int Data::GETDIA(){
    return this-> dia;
}

int Data::GETANO(){
  return this -> ano;
}

int Data::GETMES(){
  return this -> mes;
}

void Data::SETANO(int novoano){
   this-> ano = novoano;
}

void Data::SETDIA(int novodia){
   this-> dia =novodia;
}

void Data::SETMES(int novomes){
   this-> mes = novomes;
}

void Data::ToString(){
   cout << GETDIA(); 
   cout<< "/";
   cout << GETMES() ;
   cout << "/" ;
   cout<<GETANO() << endl;
}