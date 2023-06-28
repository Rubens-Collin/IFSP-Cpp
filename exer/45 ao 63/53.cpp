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

int n1;
cout << "digite um numero"<<endl;
cin >>n1;
if (n1%2==0)
{
    cout<< "o numero e par"<<endl;
}
if (n1%2==1)
{
    cout << "o numero e impar"<<endl;
}
system ("pause");
return 0;
}
