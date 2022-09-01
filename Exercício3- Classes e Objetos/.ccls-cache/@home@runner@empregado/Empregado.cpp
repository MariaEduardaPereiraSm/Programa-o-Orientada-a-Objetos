#include "Empregado.h"
#include <iostream>

using namespace std;

void Empregado::setNome(string novonome)
{
  nome = novonome;
}

string Empregado::getNome()
{
  return this->nome;
}

void Empregado::setSobrenome(string novoSobrenome)
{
  sobrenome = novoSobrenome;
}

string Empregado::getSobrenome()
{
  return this->sobrenome;
}

void Empregado::setSalarioMensal(double novoSalarioMensal)
{
  salarioMensal = novoSalarioMensal;
}

double Empregado::getSalarioMensal()
{
  return this->salarioMensal;
}

double Empregado::salarioAnual(double salarioMensal)
{
  double salarioAnual = salarioMensal * 12;
  return salarioAnual;
}

double Empregado::aumentoSalario(double salarioMensal)
{
  double aumentoSalario = (salarioMensal * 0.10) + salarioMensal ;
  setSalarioMensal(aumentoSalario);
  return aumentoSalario;
}