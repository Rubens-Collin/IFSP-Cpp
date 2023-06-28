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
if (n1>80)
{
    cout<< "o numero e maior que 80"<<endl;
}

else if (n1<25)
{
    cout<< "o numero e menor que 25"<<endl;
}
else if (n1==40)
{
    cout<< "o numero e igual a 40"<<endl;
}
system ("pause");
return 0;
}
