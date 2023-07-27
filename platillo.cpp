#include <iostream>
using namespace std;

int main()
{
  int NP, CP, TOT;
  cout << "Numero de personas: ";
  cin >> NP;
  if (NP > 300)
    CP = 75.00;
  else if (NP > 200)
    CP = 85.00;
  else
    CP = 95.00;

  TOT = NP * CP;
  cout << "Costo por platillo: $" << CP << endl
       << "Total a cobrar: $" << TOT;

  return 0;
}