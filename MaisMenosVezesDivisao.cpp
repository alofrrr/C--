#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

/*Fa�a um programa que apresente um menu de op��es para o c�lculo das seguintes opera��es entre dois n�meros inteiros: +, -, *, /, %.*/

using namespace std;

int
main () {
	setlocale (LC_ALL, "portuguese");
	int n1, n2;
	char op;

	cout << "\t\t\t\t\tCalculadora\n";
	cout << "\nPara Somar ----------------  + \nPara subtrair -------------  - \nPara multiplicar ----------  *\nPara dividir --------------  /\nPara o resto da divis�o ---  %\n\n";

	cout<<"Informe a opera��o a ser feita: ";
	cin>>op;
	cout<<"\nInforme o 1� n�mero: ";
	cin>>n1;
	cout<<"Informe o 2� n�mero: ";
	cin>>n2;

	switch(op) {
		case '+':
			cout<< "\nResultado da opera��o: "<< n1+n2;
			break;
		case '-':
			cout<< "\nResultado da opera��o: "<< n1-n2;
			break;
		case '*':
			cout<< "\nResultado da opera��o: "<< n1*n2;
			break;
		case '/':
			cout<< "\nResultado da opera��o: "<< n1/n2;
			break;
		case '%':
			cout<< "\nResultado da opera��o: "<< n1%n2;
			break;
	}


	return 0;
}
