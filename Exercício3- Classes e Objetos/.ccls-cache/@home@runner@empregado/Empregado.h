#include <iostream>
using namespace std;
class Empregado{
    public:
    string nome;
    string sobrenome;
    double salarioMensal;
    Empregado() : nome(), sobrenome(), salarioMensal(){
  
}
   
  Empregado(string novoNome, string novoSobrenome, double novoSalario){
     nome = novoNome;
     sobrenome = novoSobrenome;
    novoSalario = salarioMensal;
  }
   //metodos e funções
   void setNome(string novoNome);
   string getNome();
   void setSobrenome(string novoSobrenome);
   string getSobrenome();
   void setSalarioMensal(double novoSalarioMensal);
   double getSalarioMensal();
   double aumentoSalario(double SalarioMensal);
   double salarioAnual(double SalarioMensal);
};

