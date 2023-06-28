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

float comp,total;
int parc;
cout << "DIGITE O VALOR DA COMPRA"<<endl;
cin >> comp;
cout << "DIGITE A QUANTIDADE DE PARCELAS O MAXIMO E EM 5X"<<endl;
cin >> parc;

total = comp/parc;

cout << "O VALOR DAS PARCELAS SERA:"<<total<<endl;

system ("pause");
return 0;
}
