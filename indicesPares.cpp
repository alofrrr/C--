#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

/*Escrever um algoritmo em C++ que l� 10 n�meros inteiros, armazena em um vetor e depois exibe as posi��es de todos os n�meros que s�o pares.*/

using namespace std;

int
main () {
	setlocale (LC_ALL, "portuguese");
	int v[10], i;

	for (i = 0; i <= 9; i++) {
		cout << "Digite o " << i + 1 << "� n�mero: ";
		cin >> v[i];
	}

	for(i=0; i<=9; i++) {
		if(v[i]%2==0) {
			cout<<"\nO n�mero " << v[i] << " � par e se encontra na "<< i+1<< "� posi��o com indice " << i << " no vetor.";
		}
	}


	return 0;
}
