#include <iostream>
#include "Empregado.h"

using namespace std;

int main() {
  Empregado funcionario1, funcionario2;
  string nome, sobrenome;
  double salario;
  
  cout << "Digite o nome do primeiro funcionario: ";
  cin >> nome;
  funcionario1.setNome(nome);

  cout << "\nDigite o sobrenome do primeiro funcionario: ";
  cin >> sobrenome;
  funcionario1.setSobrenome(sobrenome);

  cout << "\nDigite o salario mensal atua do primeiro funcionario: ";
  cin >> salario;
  funcionario1.setSalarioMensal(salario);

  cout << "\n---------Primeiro Funcionario---------" << endl;
  
  cout << "\nNome: " << funcionario1.getNome() << "\nSobrenome: " << funcionario1.getSobrenome() << "\nSalario mensal atual: " << funcionario1.getSalarioMensal() << "\nSalario mensal com aumento de 10%: " << funcionario1.aumentoSalario(funcionario1.getSalarioMensal()) << "\nSalario Anual : " << funcionario1.salarioAnual(funcionario1.getSalarioMensal()) << endl;

  cout << "\n\n\nDigite o nome do segundo funcionario: ";
  cin >> nome;
  funcionario2.setNome(nome);

  cout << "\nDigite o sobrenome do segundo funcionario: ";
  cin >> sobrenome;
  funcionario2.setSobrenome(sobrenome);

  cout << "\nDigite o salario mensal atua do segundo funcionario: ";
  cin >> salario;
  funcionario2.setSalarioMensal(salario);

  cout << "\n---------Segundo Funcionario---------" << endl;
  
cout << "\nNome: " << funcionario2.getNome() << "\nSobrenome: " << funcionario2.getSobrenome() << "\nSalario mensal atual: " << funcionario2.getSalarioMensal() << "\nSalario mensal com aumento de 10%: " << funcionario2.aumentoSalario(funcionario2.getSalarioMensal()) << "\nSalario Anual : " << funcionario2.salarioAnual(funcionario2.getSalarioMensal()) << endl;
  
  return 0;
}