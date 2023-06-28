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

int ab,a,b,c;
cout << "digite o numero A"<<endl;
cin >>a;
cout << "digite o numero B"<<endl;
cin >>b;
cout << "digite o numero C"<<endl;
cin >>c;

ab = (a+b);

if (ab>c)
{
    cout<< " "<< a <<" + "<< b <<" e maior que "<< c <<" "<<endl;
}
else
{
   cout<< " "<< a <<" + "<< b <<" e menor que "<< c <<" "<<endl;
}


system ("pause");
return 0;
}
