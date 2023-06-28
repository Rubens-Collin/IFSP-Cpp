#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <iostream>
using namespace std;

 main()
{
int cel,fah;
  cout << "digite a temperatura em celsius ";
  cin>> cel;
  
  fah = (9*cel+160)/5;
  
  cout << "Fahrenheit="<<fah;

system ("pause>>null");
return 0;
}
