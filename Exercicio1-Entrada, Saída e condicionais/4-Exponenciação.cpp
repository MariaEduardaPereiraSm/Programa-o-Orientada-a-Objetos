#include <iostream>

int main() {
  int n=1;
  int k=1;
  int expo=1;
  while(k>=0){
    std::cin>>n;
    std::cin>>k;
    for(int i=0;i<k;i++){
      expo*=n;
    }
    if(k<0){
      std::cout<<"A saída não pode ser realizada pois k é menor que 0"<<std::endl;
    }
    else{
      std::cout<<expo<<std::endl;
      expo=1;
    }
    
    }
   
}