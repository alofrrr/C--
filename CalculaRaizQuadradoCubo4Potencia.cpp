#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

/*Fa�a um programa que l� um n�mero e imprime como resultado a raiz, o quadrado, cubo e a quarta pot�ncia do n�mero.*/

using namespace std;

int
main ()
{
  setlocale (LC_ALL, "portuguese");
  int n;

  cout << "Informe um n�mero: ";
  cin >> n;
  
  cout << "\nA raiz do n�mero "<< n <<" �: "<< sqrt(n);
  cout << "\nO quadrado do n�mero "<< n <<" �: "<< pow(n, 2);
  cout << "\nO cubo do n�mero "<< n <<" �: "<< pow(n, 3);
  cout << "\nA 4� pot�ncia n�mero "<< n <<" �: "<< pow(n, 4);
   

  return 0;
}
