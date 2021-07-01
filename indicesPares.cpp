#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

/*Escrever um algoritmo em C++ que lê 10 números inteiros, armazena em um vetor e depois exibe as posições de todos os números que são pares.*/

using namespace std;

int
main () {
	setlocale (LC_ALL, "portuguese");
	int v[10], i;

	for (i = 0; i <= 9; i++) {
		cout << "Digite o " << i + 1 << "° número: ";
		cin >> v[i];
	}

	for(i=0; i<=9; i++) {
		if(v[i]%2==0) {
			cout<<"\nO número " << v[i] << " é par e se encontra na "<< i+1<< "° posição com indice " << i << " no vetor.";
		}
	}


	return 0;
}
