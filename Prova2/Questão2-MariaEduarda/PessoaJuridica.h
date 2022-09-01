#ifndef PESSOAJURIDICA_H_
#define PESSOAJURIDICA_H_
#include "Pessoa.h"

class PessoaJuridica : public Pessoa{
   public:
     string cnpj;
     string nome_f;
     float faturamento;
     PessoaJuridica(string nome, string endereco, string cnpj, string nome_f, float faturamento);
     void SETCNPJ(string novocnpj);
     void SETNOMEF(string novonomef);
     void SETFATURAMENTO(float novofaturamento);
     string GETCNPJ();
     string GETNOMEF();
     float GETFATURAMENTO();
     void tostring();
};
#endif