#include <iostream>
#include <string>
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
#include "Agenda.h"
#include "Pessoa.h"

using namespace std;

int main() {
  string buscador = "Carlos";
  string buscador2 = "Maria";
  
  //PessoaFisica
  string nome = "Maria";
  string endereco = "Rua x";
  string cpf = "123234";
  string data = "Rua x";
  PessoaFisica p1 = PessoaFisica(nome, endereco, cpf, data);

  string nome1 = "Joao";
  string endereco1 = "Rua y";
  string cnpj = "000111";
  string nomef = "Juiz 2";
  float faturamento = 30000.0;

  PessoaJuridica p2 = PessoaJuridica(nome1, endereco1, cnpj, nomef, faturamento);
  PessoaFisica *f;
  PessoaJuridica *j;
  Agenda duda = Agenda(f,j);
  duda.pf[0] = p1;
  duda.pj[0] = p2;
  

  duda.BuscarContato(nome);


  return 0;
}