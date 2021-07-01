#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

/*Faça um programa que lê um número e imprime como resultado a raiz, o quadrado, cubo e a quarta potência do número.*/

using namespace std;

int
main ()
{
  setlocale (LC_ALL, "portuguese");
  int n;

  cout << "Informe um número: ";
  cin >> n;
  
  cout << "\nA raiz do número "<< n <<" é: "<< sqrt(n);
  cout << "\nO quadrado do número "<< n <<" é: "<< pow(n, 2);
  cout << "\nO cubo do número "<< n <<" é: "<< pow(n, 3);
  cout << "\nA 4° potência número "<< n <<" é: "<< pow(n, 4);
   

  return 0;
}
