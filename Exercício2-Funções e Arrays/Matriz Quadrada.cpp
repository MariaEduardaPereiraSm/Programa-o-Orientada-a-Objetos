#include <iostream>
int l=0,c=0;
int matriz_quadrada(int **m){
    if(l==c){
      std::cout<<"A matriz é quadrada";
    }else{
      std::cout<<"A matriz não é quadrada";
    }
  return 0;
}

int main() {
  std::cout<<"Digite a quantidade de linhas da sua matriz: ";
  std::cin>>l;
  std::cout<<"\nDigite a quantidade de colunas da sua matriz: ";
  std::cin>>c;
  int **matriz =new int*[l];
  int valor=0;
  std::cout<<"\nDigite os valores da sua matriz: \n";
  for(int i =0;i<l;i++){
    matriz[i]= new int[c];
    for(int j=0;j<c;j++){
      std::cin>>valor;
      matriz[i][j] = valor;
    }
  }
  for(int i =0;i<l;i++){
    for(int j=0;j<c;j++){
      std::cout<< matriz[i][j]<<" ";
    }
    std::cout<<"\n";
  }
  matriz_quadrada(matriz);
  for(int i=0;i<c;i++){
    delete [] matriz[i];
  }
  delete [] matriz;
}