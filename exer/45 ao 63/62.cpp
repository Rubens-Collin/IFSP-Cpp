// Exercicio 62
// Desenvolva um programa que solicite o nome e endereco de 3 pessoas
// Nome deve ser completo, com nome e sobrenome
// Endereco completo ( numero, complemento, bairro, cidade, estado e CEP)
// Mostre o resultado
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	char nome[50],rua[50],comp[50],bairro[50],ci[50],est[50],num[50],cep[50];
	char nome2[50],rua2[50],comp2[50],bairro2[50],ci2[50],est2[50],num2[50],cep2[50];
	char nome3[50],rua3[50],comp3[50],bairro3[50],ci3[50],est3[50],num3[50],cep3[50];
	//cadastro 1ª pessoa
	cout<<"Digite o nome da 1ª pessoa: "<<endl;
	cin.getline (nome,50);
	cout<<"Informe o endereço: "<<endl;
	cout<<"Digite o nome da rua: "<<endl;
	cin.getline (rua,50);
	cout<<"Digite o nº da casa: "<<endl;
	cin.getline (num,50);
	cout<<"Digite o complemento: "<<endl;
	cin.getline (comp,50);
	cout<<"Digite o nome do bairro: "<<endl;
	cin.getline (bairro,50);
	cout<<"digite o nome da cidade: "<<endl;
	cin.getline (ci,50);
	cout<<"Digite o nome do estado: "<<endl;
	cin.getline (est,50);
	cout<<"Digite o nº do CEP: "<<endl;
	cin.getline (cep,50);
	system("cls");
	
	//cadastro 2ª pessoa
	cout<<"Digite o nome da 2ª pessoa: "<<endl;
	cin.getline (nome2,50);
	cout<<"Informe o endereço: "<<endl;
	cout<<"Digite o nome da rua: "<<endl;
	cin.getline (rua2,50);
	cout<<"Digite o nº da casa: "<<endl;
	cin.getline (num2,50);
	cout<<"Digite o complemento: "<<endl;
	cin.getline (comp2,50);
	cout<<"Digite o nome do bairro: "<<endl;
	cin.getline (bairro2,50);
	cout<<"digite o nome da cidade: "<<endl;
	cin.getline (ci2,50);
	cout<<"Digite o nome do estado: "<<endl;
	cin.getline (est,50);
	cout<<"Digite o nº do CEP: "<<endl;
	cin.getline (cep2,50);
	system("cls");
	
	//cadastro 3ª pessoa
	cout<<"Digite o nome da 3ª pessoa: "<<endl;
	cin.getline (nome3,50);
	cout<<"Informe o endereço: "<<endl;
	cout<<"Digite o nome da rua: "<<endl;
	cin.getline (rua3,50);
	cout<<"Digite o nº da casa: "<<endl;
	cin.getline (num3,50);
	cout<<"Digite o complemento: "<<endl;
	cin.getline (comp3,50);
	cout<<"Digite o nome do bairro: "<<endl;
	cin.getline (bairro3,50);
	cout<<"digite o nome da cidade: "<<endl;
	cin.getline (ci3,50);
	cout<<"Digite o nome do estado: "<<endl;
	cin.getline (est3,50);
	cout<<"Digite o nº do CEP: "<<endl;
	cin.getline (cep3,50);
	system("cls");
	
	//resultado 1ª pessoa
	cout<<"Nome: "<<nome<<endl;
	cout<<"Enderço: Rua: "<<rua<<endl;
	cout<<"Numero: "<<num<<endl;
	cout<<"Complemento: "<<comp<<endl;
	cout<<"Bairro: "<<bairro<<endl;
	cout<<"Cidade: "<<ci<<endl;
	cout<<"Estado: "<<est<<endl;
	cout<<"CEP: "<<cep<<endl;
	
	//resultado 2ª pessoa
	cout<<"Nome: "<<nome2<<endl;
	cout<<"Enderço: Rua: "<<rua2<<endl;
	cout<<"Numero: "<<num2<<endl;
	cout<<"Complemento: "<<comp2<<endl;
	cout<<"Bairro: "<<bairro2<<endl;
	cout<<"Cidade: "<<ci2<<endl;
	cout<<"Estado: "<<est2<<endl;
	cout<<"CEP: "<<cep2<<endl;
	
	//resultado 3ª pessoa
	cout<<"Nome: "<<nome3<<endl;
	cout<<"Enderço: Rua: "<<rua3<<endl;
	cout<<"Numero: "<<num3<<endl;
	cout<<"Complemento: "<<comp3<<endl;
	cout<<"Bairro: "<<bairro3<<endl;
	cout<<"Cidade: "<<ci3<<endl;
	cout<<"Estado: "<<est3<<endl;
	cout<<"CEP: "<<cep3<<endl;

	
	
	
	
	
	
	system ("pause>>null");
	return 0;
}
