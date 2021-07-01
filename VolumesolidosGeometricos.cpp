#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

/*Escreva um algoritmo que calcula o volume de alguns solidos geometricos, conforme o menu abaixo. O algoritmo devera identificar a
opcao escolhida, solicitar os dados necessarios, exibir o resultado dos calculos e permitir que o usuario retorne ao menu para
realizar novos calculos.

Cubo (l*l*l)
Ortoedro (l1*l2*h)
Esfera ((4/3)*3.14*raio*raio*raio)
Cilindro (3.14*raio*raio*altura)*/

int main() {
	setlocale(LC_ALL, "portuguese");
	system ("color f1");
	int operador;
	float l, l1,l2,h,raio1,raio2,altura;


	do {
		system ("cls");
		cout << "\t\t\t\t Calculadora de volume de solidos geometricos\n";
		cout << "\nVolume Cubo ---------------- 1 \nVolume Ortoedro ------------ 2\nVolume Esfera -------------- 3\nVolume Cilindro ------------ 4\nPara sair ------------------ 0\n";
		cout << "\nVocê deseja: ";
		cin >> operador;

		if(operador == 1) {
			system ("color f4");
			cout<<"\t\t\t\tVolume Cubo\n";
			cout << "\nInforme a aresta: ";
			cin>>l;
			cout<<"\nO volume do cubo é: "<< (l*l*l);
			cout<<"\n\n";

		}

		if(operador == 2) {
			system ("color f2");
			cout<<"\t\t\t\tVolume Ortoedro\n";
			cout << "\nInforme a altura: ";
			cin>>h;
			cout << "Informe a largura: ";
			cin>>l1;
			cout << "Informe a profundidade: ";
			cin>>l2;
			cout<<"\nO volume do ortoedro é: "<< (h*l1*l2);
			cout<<"\n\n";
		}

		if(operador == 3) {
			system ("color f3");
			cout<<"\t\t\t\tVolume Esfera\n";
			cout << "\nInforme o raio: ";
			cin>>raio1;
			cout<<"\nO volume da esfera é: "<< (4*3.14*pow(raio1,3)/3);
			cout<<"\n\n";
		}

		if(operador == 4) {
			system ("color f5");
			cout<<"\t\t\t\tVolume Cilindro\n";
			cout << "\nInforme o raio: ";
			cin>>raio2;
			cout << "Informe a altura: ";
			cin>>altura;
			cout<<"\nO volume do cilindro é: "<< (3.14*pow(raio2, 2)*altura);
			cout<<"\n\n";
		}
		cout<<"\n";
		system ("pause");
		
	} while(operador != 0);

	getch();
}
