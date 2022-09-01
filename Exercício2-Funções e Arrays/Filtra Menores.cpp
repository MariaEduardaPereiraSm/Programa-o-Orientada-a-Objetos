#include <iostream>
#include <vector>
using namespace std;
int linhas;
int **matriz= new int*[linhas];
void filtra_menores(int **matriz){
  int busca;
  int eliminados=0;
  std::cout<<"Digite o valor: ";
  std::cin>>busca;
  for(int chave=0;chave<linhas;chave++){
    int c1,c2;
    for(int valor=0;valor<1;valor++){
      c1=matriz[chave][valor];
      if(c1>=busca){
        std::cout<<matriz[chave][valor]<<":"<<matriz[chave][valor+1]<<std::endl;}
      else{
        eliminados++;
      }
          
    }
  }
  std::cout<<"A Quantidade de pares eliminados foi: "<<eliminados;
  
  for(int i=0;i<2;i++){
    delete [] matriz[i];
  }
  delete [] matriz;

  
}
int main() {
  
  std::cout<<"Digite a quantidade de linhas da sua matriz: ";
  std::cin>>linhas;
  std::cout<<"Digite os valores da sua matriz: "<<std::endl;
  for(int chave =0;chave<linhas;chave++){
    matriz[chave] = new int[2];
    for(int valor=0;valor<2;valor++){
      std::cin>>matriz[chave][valor];
    }
  }
 filtra_menores(matriz);

    return 0;
}