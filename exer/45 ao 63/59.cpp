// Exercício 59
// Dados três valores A, B e C, em que A e B são números reais e C é um caractere,
// pede se para imprimir o resultado da operação de A por B se C for um símbolo de
// operador aritmético caso contrário deve ser impressa uma mensagem de
// operador não definido Tratar erro de divisão por zero

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
