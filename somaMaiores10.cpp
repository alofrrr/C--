#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

/* Escrever um algoritmo em C++ que l� 50 n�meros inteiros, armazena em um vetor e depois exibe a soma de todos os n�meros maiores que 10.*/
using namespace std;

int
main ()
{
  setlocale (LC_ALL, "portuguese");
  int v[50], i, soma;

  for (i = 0; i <= 49; i++){
      cout << "Digite o " << i + 1 << "� n�mero: ";
      cin >> v[i];
    }

  for(i=0; i<= 49; i++){
      if(v[i] > 10){
          soma += v[i];
      }
  }
   
    cout << "\nA soma dos n�meros maiores que 10 �: " << soma;
    
  return 0;
}
