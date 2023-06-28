#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <iostream>
using namespace std;

 main()
{
int n1,n2,soma,sub,mult;
float div;
  cout << "digite um numero:";
  cin>> n1 ;
  cout << "digite um numero:";
  cin>> n2;
  
  soma= n1+n2;
  sub= n1-n2;
  mult= n1*n2;
  div=  n1/n2;
  
  cout << "o resultado da soma e:" <<soma<<endl;
  cout << "o resultado da subtracao e:" <<sub<<endl;
  cout << "o resultado da multiplicacao e:" <<mult<<endl;
   cout << "o resultado da divisao e:" <<div<<endl;

system ("pause>>null");
return 0;
}
