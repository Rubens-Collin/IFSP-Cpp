#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale>
using namespace std;
main()
{
//comandos do programa
setlocale(LC_ALL,"PORTUGUESA");

int n1,suce;


cout << "digite um numero entre 0 a 60\n";
cin >> n1;

if (n1<=59)
{
  suce = (n1+1);
cout<< "o sucessor de "<<n1<<" e "<<suce<<" \n";
}
if (n1==60)
{
  suce=0;
cout<< "o sucessor de "<<n1<<" e "<<suce<<" \n";
}
if (n1>60)
{
 cout << "numero invalido\n";
}
system ("pause");
return 0;
}
