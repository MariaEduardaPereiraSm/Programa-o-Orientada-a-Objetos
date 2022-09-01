#ifndef Endereco_H
#define Endereco_H
#include <iostream>
#include <string>
using namespace std;

class Endereco{
  //atributos
  public:
    string rua;
    string numeroResidencia;
    string bairro;
    string referencia;
    //contrutor
    Endereco();
    //métodos
    void setRUA(string novaRua);
    void setNUMEROCASA(string novoNumeroResidencia);
    void setBAIRRO(string novoBairro);
    void setREFERENCIA(string novaReferencia);
    string getRUA();
    string getNUMEROCASA();
    string getBAIRRO();
    string getREFERENCIA();
}; 
#endif