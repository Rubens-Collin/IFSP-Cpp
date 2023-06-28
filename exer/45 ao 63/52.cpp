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

int n1,n2,n3,soma,mult;
cout << "digite um numero. nao pode ter numeros iguais"<<endl;
cin >>n1;
cout << "digite outro numero "<<endl;
cin >>n2;
cout << "digite outro numero "<<endl;
cin >>n3;
if (n1==n2)
{
    cout<< "invalido";
}
if(n2==n3)
{
     cout<< "invalido";
}
 if (n1==n3)
{
     cout << "invalido";
}

if     (n1>n3 and n2>n3)
{
    soma = n1+n2;
    cout<< "a soma dos numeros maiores e:" <<soma<<endl;
}
if (n3>n1 and n2>n1)
{
    soma = n3+n2;
    cout<< "a soma dos numeros maiores e:" <<soma<<endl;
}
if (n1>n2 and n3>n2)
{
    soma = n1+n3;
    cout<< "a soma dos numeros maiores e:" <<soma<<endl;
}
if (n1<n3 and n2<n3)
{
    mult = n1*n2;
    cout<< "a multiplicacao dos numeros menores e:"<<mult<<endl;
}
if (n1<n2 and n3<n2)
{
    mult = n1*n3;
    cout<< "a multiplicacao dos numeros menores e:"<<mult<<endl;
}
if (n2<n1 and n3<n1)
{
    mult = n3*n2;
    cout<< "a multiplicacao dos numeros menores e:"<<mult<<endl;
}

system ("pause");
return 0;
}
