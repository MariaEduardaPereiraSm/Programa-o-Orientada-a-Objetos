#include <iostream>
int tamanho;
int **mapeamento = new int*[tamanho];
int mapeia(int *lista1, int *lista2){
  for(int i =0;i<tamanho;i++){
    mapeamento[i] = new int[2];
    for(int j=0;j<2;j++){
      if(j==0){//lista2
        mapeamento[i][j] = lista1[i];   
      }
      else{
        mapeamento[i][j] = lista2[i];

      }
    }
  }
  std::cout<<"---Mapemento Chave Valor---"<<std::endl;
  for(int i =0;i<tamanho;i++){
    for(int j=0;j<2;j++){
      std::cout<<mapeamento[i][j]<< " ";
    }
    std::cout<<"\n";
  }
  return 0;
}
int main() {
  std::cout<<"Digite o tamanho da sua lista : ";
  std::cin>>tamanho;
  int *lista1 =new int[tamanho];
  int *lista2 = new int[tamanho];
  std::cout<<"Digite os valores da lista 1: "<<std::endl;
  for(int i =0; i<tamanho;i++){
    std::cin>>lista1[i];
  }
  std::cout<<"Digite os valores da lista 2:"<<std::endl;
  for(int i =0; i<tamanho;i++){
    std::cin>>lista2[i];
  }
  mapeia(lista1,lista2);
}