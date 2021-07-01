#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

/* Escrever um algoritmo em C++ que lê 50 números inteiros, armazena em um vetor e depois exibe a soma de todos os números maiores que 10.*/
using namespace std;

int
main ()
{
  setlocale (LC_ALL, "portuguese");
  int v[50], i, soma;

  for (i = 0; i <= 49; i++){
      cout << "Digite o " << i + 1 << "° número: ";
      cin >> v[i];
    }

  for(i=0; i<= 49; i++){
      if(v[i] > 10){
          soma += v[i];
      }
  }
   
    cout << "\nA soma dos números maiores que 10 é: " << soma;
    
  return 0;
}
