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

int idade;

cout << "digite sua idade\n";
cin>> idade;

if (idade>=5 && idade<=7)
{
    cout << "infantil A\n";
}

if (idade>=8 && idade<=10)
{
    cout << "infantil B\n";
}

if (idade>=11 && idade<=13)
{
    cout << "juvenil A\n";
}
if (idade>=14 && idade<=17)
{
    cout << "juvenil B\n";
}

if (idade>=18 && idade<=25)
{
    cout << "senior\n";
}
else
{
    cout << "idade fora da faixa etaria";
}


system ("pause");
return 0;
}
