#ifndef DATA_H_
#define DATA_H_
#include <string>
#include <iostream>

using namespace std;

class Data{
    public:
      int dia;
      int mes;
      int ano;
      int GETDIA();
      int GETMES();
      int GETANO();
      void SETDIA(int novodia);
      void SETMES(int novomes);
      void SETANO(int novoano);
      Data(int dia, int mes, int ano);//Construtor
      int NovaData(int dia, int mes, int ano);//Adicionar 1 na data
      void ToString();
      int VerificaData(int dia, int mes, int ano);


};
#endif