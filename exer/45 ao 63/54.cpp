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

float m;
char nome[50];
//aluno1
cout << "digite o nome do primeiro aluno"<<endl;
cin >> nome;
cout << "digite a media do primeiro aluno"<<endl;
cin >> m;
if (m>=7)
{
cout<< "o aluno "<<nome<< " esta aprovado"<<endl;
}
if (m>=5 and m<7)
{
    cout<< "o aluno "<<nome<<" esta de recuperacao"<<endl;
}
if (m<5)
{
    cout<< "o aluno "<<nome<< " esta reprovado"<<endl;
}
//aluno2
cout << "digite o nome do segundo aluno"<<endl;
cin >> nome;
cout << "digite a media do segundo aluno"<<endl;
cin >> m;
if (m>=7)
{
cout<< "o aluno "<<nome<< " esta aprovado"<<endl;
}
if (m>=5 and m<7)
{
    cout<< "o aluno "<<nome<<" esta de recuperacao"<<endl;
}
if (m<5)
{
    cout<< "o aluno "<<nome<< " esta reprovado"<<endl;
}
//aluno3
cout << "digite o nome do terceiro aluno"<<endl;
cin >> nome;
cout << "digite a media do terceira aluno"<<endl;
cin >> m;
if (m>=7)
{
cout<< "o aluno "<<nome<< " esta aprovado"<<endl;
}
if (m>=5 and m<7)
{
    cout<< "o aluno "<<nome<<" esta de recuperacao"<<endl;
}
if (m<5)
{
    cout<< "o aluno "<<nome<< " esta reprovado"<<endl;
}
//aluno4
cout << "digite o nome do quarto aluno"<<endl;
cin >> nome;
cout << "digite a media do quarta aluno"<<endl;
cin >> m;
if (m>=7)
{
cout<< "o aluno "<<nome<< " esta aprovado"<<endl;
}
if (m>=5 and m<7)
{
    cout<< "o aluno "<<nome<<" esta de recuperacao"<<endl;
}
if (m<5)
{
    cout<< "o aluno "<<nome<< " esta reprovado"<<endl;
}
//aluno5
cout << "digite o nome do quinto aluno"<<endl;
cin >> nome;
cout << "digite a media do quinto aluno"<<endl;
cin >> m;
if (m>=7)
{
cout<< "o aluno "<<nome<< "esta aprovado"<<endl;
}
if (m>=5 and m<7)
{
    cout<< "o aluno "<<nome<<" esta de recuperacao"<<endl;
}
if (m<5)
{
    cout<< "o aluno "<<nome<< " esta reprovado"<<endl;
}

system ("pause");
return 0;
}
