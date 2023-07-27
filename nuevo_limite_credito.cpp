#include <iostream>
using namespace std;

int main()
{
  int TT;
  float LA, AC, NC;
  cout << "Tipo de tarjeta: ";
  cin >> TT;
  cout << "Limite actual: ";
  cin >> LA;
  switch (TT)
  {
  case 1:
    AC = LA * 0.25;
    break;
  case 2:
    AC = LA * 0.35;
    break;
  case 3:
    AC = LA * 0.40;
    break;
  default:
    AC = LA * 0.50;
    break;
  }
  NC = LA + AC;
  cout << "El aumento es de: " << AC << endl
       << "El nuevo limite es de: " << NC;
  return 0;
}