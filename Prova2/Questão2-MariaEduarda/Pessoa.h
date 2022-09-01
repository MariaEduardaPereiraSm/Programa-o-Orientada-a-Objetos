#ifndef PESSOA_H_
#define  PESSOA_H_
#include <string>
using namespace std;

class Pessoa{
 public:
   string nome;
   string endereco;
   void SETNOME(string novonome);
   void SETENDERECO(string novoendereco);
   string GETNOME();
   string GETENDERECO();
   Pessoa(string nome, string endereco);
};
#endif