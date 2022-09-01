#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

int main() {
   int dia, mes, ano;
   cout << "Digite o Dia: ";
   cin >> dia;
   cout << "\n";
   cout << "Digite o mes: ";
   cin >> mes;
   cout << "\n";
   cout << "Digite o ano: ";
   cin>> ano;
   Data data = Data(dia, mes, ano);
   data.VerificaData(dia, mes, ano);
   data.NovaData(dia, mes, ano);
   data.ToString();
  
   return 0;
   
}