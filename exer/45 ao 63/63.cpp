#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;

main()
{
//comandos do programa
setlocale(LC_ALL, "portuguese");
int cod,senha;

cout<<"digite o codigo de usuario\n";
cin>> cod;

if (cod!=1234)
{
    cout<< "Usuario invalido\n";
    return 0;
}

cout<< "Digite a senha \n";
cin>> senha;
if (senha!=9999)
{
    cout<< "Senha incorreta\n";
    return 0;
}
else
{
    cout<< "Acesso permitido\n";
}
system ("pause");
return 0;
}

