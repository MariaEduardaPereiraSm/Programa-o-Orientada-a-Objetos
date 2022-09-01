#include <iostream>
#include <stdlib.h>
#include <ctime>
int main() {
  unsigned seed = time(0);
  srand(seed);
  int numero_aleatorio;
  int quantidade_tentativas=0;
  int palpite=1;
  numero_aleatorio= rand()%100;
  std::cout<<"-----Jogo de adivinhar o número-------"<< std::endl;
  std::cout <<"Digite o seu palpite-> " <<std::endl;
  while(palpite!=numero_aleatorio){
    std::cin>> palpite;
    quantidade_tentativas++;
    if(palpite>numero_aleatorio){
      std::cout<<"Seu palpite é maior que o número sorteado."<<std::endl;
    }
    if(palpite<numero_aleatorio){
      std::cout<<"Seu palpite é menor que o número sorteado."<<std::endl;
    }
    else if(palpite==numero_aleatorio){
      std::cout<<"Parabéns, você acertou o número"<<std::endl;
    }
  }
   std::cout<<"Quantidade de tentativas ->"<< quantidade_tentativas<<std::endl;
}