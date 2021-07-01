#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

/*Crie uma struct para registro de pe�as de uma loja de autope�as. Esta struct deve conter os seguintes campos: c�digo da pe�a, nome da pe�a, 
quantidade em estoque, pre�o de venda. Escreva um algoritmo em C++ que permita armazenar dados nesta struct de 100 pe�as. Inserir um menu que 
permita ao usu�rio escolher se deseja cadastrar ou consultar um registro. No caso de escolher consultar, a consulta ser� realizada mediante 
fornecimento do c�digo da pe�a. A resposta da consulta dever� ser o conjunto de dados do registro, seguido da op��o de nova consulta.*/

using namespace std;

struct Autopecas {
	float codigo_peca;
	string nome_peca;
	int quantidade_estoque;
	float preco_venda;
};

int main() {
	setlocale(LC_ALL, "portuguese");
	system ("color f1");
	Autopecas loja[100];
	int i = 0, operador, j;
	float ConsultarCodigoPeca;


	do {
		system ("cls");
		cout << "\t\t\t\t Bem Vindo a Auto Pe�as da Nalaura\n";
		cout << "\nPara cadastrar ---------------- 1 \nPara consultar ---------------- 2 \nPara sair --------------------- 0\n";
		cout << "\nVoc� deseja: ";
		cin >> operador;

		if(operador == 1) {
			if(i <= 99) {
				cout << "Informe o codigo da " << i + 1 << "� pe�a: ";
				cin >> loja[i].codigo_peca;
				cout << "Informe o nome da " << i + 1 << "� pe�a: ";
				cin >> loja[i].nome_peca;
				cout << "Informe a quantidade da " << i + 1 << "� pe�a: ";
				cin >> loja[i].quantidade_estoque;
				cout << "Informe o pre�o da " << i + 1 << "� pe�a: ";
				cin >> loja[i].preco_venda;

				i++;
			} else {
				cout << "Voc� ja cadastrou mais de 100 pe�as!";
			}
		}
		if(operador == 2) {
			if(i == 0) {
				cout << "Voc� n�o cadastrou nenhum produto!\n";
			} else {
				cout <<"Informe o codigo da pe�a que deseja consultar: ";
				cin >> ConsultarCodigoPeca;

				for(j=0; j<=99; j++) {
					if(loja[j].codigo_peca == ConsultarCodigoPeca) {
						cout <<"\nNome: " << loja[j].nome_peca;
						cout <<"\nQuantidade no estoque: " << loja[j].quantidade_estoque;
						cout <<"\nPre�o de venda: " << loja[j].preco_venda;
						j = 100;
					}
				}
				cout<< "\n";
			}
			system ("pause");
		}

	} while(operador != 0);

	getch();
}
