#include <iostream>
#include <iomanip>
using std::fixed;
using std::setprecision;
int main() {
  float numero;
  float soma_positivos=0, soma_negativos=0;
  float cont_positivos=0, cont_negativos=0;
  float mediap, median;
  std::cout << "Digite 5 valores reais :" << std::endl;
  for(int i=0;i<5;i++){
    std::cin >> numero;
    if(numero>=0){
      soma_positivos+=numero;
      cont_positivos+=1;
    }
    else{
      soma_negativos+=numero;
      cont_negativos+=1;
    }
  }
  mediap = soma_positivos/cont_positivos;
  median = soma_negativos/cont_negativos;
      std::cout << "A média dos números positivos é: " << fixed << setprecision(2)<< mediap << std::endl;

    std::cout << "A média dos números negativos é: " << median;
}