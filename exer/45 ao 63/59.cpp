// Exerc�cio 59
// Dados tr�s valores A, B e C, em que A e B s�o n�meros reais e C � um caractere,
// pede se para imprimir o resultado da opera��o de A por B se C for um s�mbolo de
// operador aritm�tico caso contr�rio deve ser impressa uma mensagem de
// operador n�o definido Tratar erro de divis�o por zero

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


float n1,n2,total;
char opera;
cout << "Digite um numero:";
cin >> n1;
cout<< "Digite outro numero:";
cin >> n2;
cout<< "Digite a operacao aritimetica que voce deseja +,-,*,/: ";
cin >> opera;

switch (opera)
{
case '+':
    total = n1+n2;
cout<< "a soma dos numeros e "<<total<<" \n";
break;
case '-':
    total = n1-n2;
cout<< "a subtracao dos numero e "<<total<<" \n";
break;
case '*':
    total = n1*n2;
cout<< "a multiplicacao dos numero e "<<total<<" \n";
break;
case '/':
    total = n1/n2;
cout<< "a divisao dos numero e "<<total<<" \n";
break;
}



system ("pause");
return 0;
}
