#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale>
using namespace std;
main()
{
//comandos do programa
setlocale(LC_ALL, "Portuguese");
char nome[20];
int peso;
float imc,alt,pi5,pi4,pi3,pi2,pi;

cout<< "digite seu nome:";
cin >> nome;
cout << "digite o seu peso:";
cin>> peso;
cout<< "digite a sua altura:";
cin>> alt;

imc = peso/(alt*alt);
//pi2=pow(alt,2)*21.8;
//cout.precision(2);

	if (imc<=18.5)
       pi=pow(alt,2)*21.8;
	   cout.precision(2);
		{	
		cout<<"O(A) paciente: "<<nome<<endl;
		cout<<"Com o imc "<<imc<<" e peso "<<peso<<"k"<<endl;
		cout<<"Está abaixo do peso abaixo do imc:18.5"<<endl;
		
		cout<<"O peso ideal é: "<<pi<<"k"<<endl;
		}
	if (imc>=18.5 and imc<=24.9)
		{
		cout<<"O(A) paciente: "<<nome<<endl;
		cout<<"Com o imc "<<imc<<endl;
		cout<<"Está com o peso normal "<<peso<<"k"<<endl;
		}
	if (imc>=25 and imc<=29.9)
		{
		pi2=pow(alt,2)*21.8;
	    cout.precision(2);
		cout<<"O(A) paciente: "<<nome<<endl;
		cout<<"Com o imc "<<imc<<endl;
		cout<<"Está com sobrepeso: "<<peso<<"k"<<endl;
		cout<<"O peso ideal é: "<<pi2<<"k"<<endl;
		}
	if (imc>=30 and imc<=34.9)
		{
		pi3=pow(alt,2)*21.8;
	    cout.precision(2);
		cout<<"O(A) paciente: "<<nome<<endl;
		cout<<"Com o imc "<<imc<<endl;
		cout<<"Está com Obsidade grau I: "<<peso<<"k"<<endl;
		cout<<"O peso ideal é: "<<pi3<<"k"<<endl;
		}
	if (imc>=35 and imc<=39.9)
		{
		pi4=pow(alt,2)*21.8;
	    cout.precision(2);
		cout<<"O(A) paciente: "<<nome<<endl;
		cout<<"Com o imc "<<imc<<endl;
		cout<<"Está com Obsidade grau II: "<<peso<<"k"<<endl;
		cout<<"O peso ideal é: "<<pi4<<"k"<<endl;
		}
	if (imc>=40)
		{
		pi5=pow(alt,2)*21.8;
	    cout.precision(2);
		cout<<"O(A) paciente: "<<nome<<endl;
		cout<<"Com o imc "<<imc<<endl;
		cout<<"Está com Obsidade grau III: "<<peso<<"k"<<endl;
		cout<<"O peso ideal é: "<<pi5<<"k"<<endl;
		}

system ("pause");
return 0;
}
