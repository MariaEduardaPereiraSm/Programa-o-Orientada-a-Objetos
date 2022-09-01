#include <iostream>
#include <ctime>
#include <stdio.h>
int embaralhar(int armazenar_numeros[]){
  unsigned seed = time(0);
  srand(seed);
  int novo_array[5], posicoes_utilizadas[5];
  int posicao=0, posicao2=0,troca1=0, troca2=0;
  for(int i =0;i<5;i++){//copia do vetor
    novo_array[i] = armazenar_numeros[i];
  }
  for(int i=0;i<5;i++){//For para trocar posições no vetor, a troca é feita entre duas posições aleátorias
  posicao=rand()%5;
  posicao2 = rand()%5;
  troca1 = novo_array[posicao];
  troca2 = novo_array[posicao2];
  novo_array[posicao]=troca2;
  novo_array[posicao2] = troca1;
    }
  std::cout<<"\nArray Embaralhado: " << std::endl;
  for(int i=0;i<5;i++){//Imprimi o array embaralhado
    std::cout<< novo_array[i] << " - ";
  }
  return 0;
    }
int main() {
  int armazenar_numeros[5];
  int numero=0;
  std::cout<<"Digite 5 números: "<<std::endl;
  for(int i =0;i<5;i++){
    std::cin >> numero;
    armazenar_numeros[i] = numero;
  }
  std::cout<<"Array: " << std::endl;
   for(int i =0;i<5;i++){//Imprimi o array
    std::cout<<armazenar_numeros[i]<< " - ";
  }
  embaralhar(armazenar_numeros);
}