#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

/*Construa um algoritmo que tendo como entrada dois pontos quaisquer P(x1,y1) e Q(x2,y2) no plano, imprima a inclina��o da reta que
 passa por eles. Inclina��o da reta = (y2 � y1 ) / ( x2 � x1).*/


using namespace std;

int
main () {
	setlocale (LC_ALL, "portuguese");
	int x1, y1, x2, y2;

	cout << "Informe o valor de X do ponto P: ";
	cin >> x1;
	cout << "Informe o valor de Y do ponto P: ";
	cin >> y1;
	cout << "Informe o valor de X do ponto Q: ";
	cin >> x2;
	cout << "Informe o valor de Y do ponto Q: ";
	cin >> y2;


	cout <<"\nA inclina��o da reta dos pontos P("<< x1 <<","<< y1 <<") e Q("<< x2 <<","<< y2 <<") �: " << ((y2 - y1)/( x2 - x1));


	return 0;
}
