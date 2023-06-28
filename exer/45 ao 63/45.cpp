
#include <iostream>
//#include <stdlib.h>
//#include <stdio.h>
//#include <locale.h>
//#include <math.h>

using namespace std;
main()
{
	int a,b,x;
	cout << "digite o numero a:";
	cin >> a;
	cout << "digite o numero a:";
	cin >> b;
	
	x=a;
	a=b;
	b=x;
	
	cout << "o numero A recebeu B:"<<a;
	cout << "o numero B recebeu A:"<<b;
	system ("pause>>null");
	return 0;
	
}
