#include <iostream>
#include <math.h>
#include <istream>
#include <ostream>
#include <iomanip>
using std::cout; 
using std::fixed;
using std::setprecision;
int main(){
    int a,b,c;
    float delta;
    float raiz_delta;
    float x1;
    float x2;
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    std::cout << "Digite o valor de b: ";
    std::cin >> b;
    std::cout << "Digite o valor de c: ";
    std::cin >>c;
    delta = (b*b) - (4*a*c);
    if(delta<0){
      std::cout<<"A equação não possui resultados reais";
    }
    else{
    raiz_delta = sqrt(delta);
    x1 = (-b + raiz_delta)/(2*a);
    x2 = (-b - raiz_delta)/(2*a);
    std::cout << delta << std::endl;
    std::cout << fixed << setprecision(4)<<x1 << std::endl;
    std::cout <<x2 << std::endl;
      }
}