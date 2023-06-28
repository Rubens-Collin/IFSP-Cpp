#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <iostream>
using namespace std;

 main()
{
float cot,real,dol;
  cout << "digite o valor em dolar:";
  cin>> dol;
  cout << "digite o valor da cotacao:";
  cin>> cot;
  
  real = cot*dol;
 
  cout << "a conversao do dolar para real e:"<<real;  
system ("pause>>null");
return 0;
}
