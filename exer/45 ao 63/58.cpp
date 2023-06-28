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

int n1,n2,n3;

cout << "digite 3 numeros diferesntes\n";
cin>> n1;
cin>>n2;
cin>>n3;


if (n1>n2 && n2>n3)
{
    cout<< ""<<n3<<" "<<n2<<" "<<n1<<" \n";
}
else if (n1>n3 && n3>n2)
{
    cout<< ""<<n2<<" "<<n3<<" "<<n1<<" \n";
}
else if (n2>n3 && n3>n1)
 {
    cout<< ""<<n1<<" "<<n3<<" "<<n2<<" \n";
 }
else if (n3>n2 && n2>n1)
{
    cout << ""<<n1<<" "<<n2<<" "<<n3<<" \n";
}
else if (n2>n1 && n1>n3)
{
    cout << ""<<n3<<" "<<n1<<" "<<n2<<" \n";
}
else if (n3>n1 && n1>n2)
{
    cout << ""<<n2<<" "<<n1<<" "<<n3<<" \n";
}


//n2
else if (n3>n1 && n1>n2)
{
    cout << ""<<n2<<" "<<n1<<" "<<n3<<" \n";
}
else if (n1>n3 && n3>n2)
{
    cout << ""<<n2<<" "<<n3<<" "<<n1<<" \n";
}
else if (n2>n1 && n1>n3)
{
    cout << ""<<n3<<" "<<n1<<" "<<n2<<" \n";
}
else if (n2>n3 && n3>n1)
{
    cout << ""<<n1<<" "<<n3<<" "<<n2<<" \n";
}
else if (n1>n2 && n2>n3)
{
    cout << ""<<n3<<" "<<n2<<" "<<n1<<" \n";
}
else if (n3>n2 && n2>n1)
{
    cout << ""<<n1<<" "<<n2<<" "<<n3<<" \n";
}


//n3

else if (n3>n1 && n1>n2)
{
    cout << ""<<n2<<" "<<n1<<" "<<n3<<" \n";
}

else if (n3>n2 && n2>n1)
{
    cout << ""<<n1<<" "<<n2<<" "<<n3<<" \n";
}
else if (n1>n2 && n2>n3)
{
    cout << ""<<n1<<" "<<n2<<" "<<n3<<" \n";
}
else if (n2>n1 && n1>n3)
{
    cout << ""<<n2<<" "<<n1<<" "<<n3<<" \n";
}
else if (n1>n3 && n3>n2)
{
    cout << ""<<n1<<" "<<n3<<" "<<n2<<" \n";
}
else if (n2>n3 && n3>n1)
{
    cout << ""<<n2<<" "<<n3<<" "<<n1<<" \n";
}


system ("pause");
return 0;
}
