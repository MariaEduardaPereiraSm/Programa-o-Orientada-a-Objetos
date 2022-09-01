#ifndef PESSOAFISICA_H_
#define PESSOAFISICA_H_
#include "Pessoa.h"
#include <string>

using namespace std;

class PessoaFisica : public Pessoa{
  public:
   string cpf;
   string data_a;
   PessoaFisica(string nome, string endereco, string cpf, string data_a);
   string GETCPF();
   string GETDATA();
   void SETCPF(string novocpf);
   void SETDATA(string novadata);
   void tostring();
 

};
#endif