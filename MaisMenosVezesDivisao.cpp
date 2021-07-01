#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

/*Faça um programa que apresente um menu de opções para o cálculo das seguintes operações entre dois números inteiros: +, -, *, /, %.*/

using namespace std;

int
main () {
	setlocale (LC_ALL, "portuguese");
	int n1, n2;
	char op;

	cout << "\t\t\t\t\tCalculadora\n";
	cout << "\nPara Somar ----------------  + \nPara subtrair -------------  - \nPara multiplicar ----------  *\nPara dividir --------------  /\nPara o resto da divisão ---  %\n\n";

	cout<<"Informe a operação a ser feita: ";
	cin>>op;
	cout<<"\nInforme o 1° número: ";
	cin>>n1;
	cout<<"Informe o 2° número: ";
	cin>>n2;

	switch(op) {
		case '+':
			cout<< "\nResultado da operação: "<< n1+n2;
			break;
		case '-':
			cout<< "\nResultado da operação: "<< n1-n2;
			break;
		case '*':
			cout<< "\nResultado da operação: "<< n1*n2;
			break;
		case '/':
			cout<< "\nResultado da operação: "<< n1/n2;
			break;
		case '%':
			cout<< "\nResultado da operação: "<< n1%n2;
			break;
	}


	return 0;
}
