#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>
/*Escrever um algoritmo em C++ que lê duas matrizes de números inteiros (tamanho 3 x 4) e calcula uma terceira matriz resultante 
da soma das duas primeiras. Mostrar a matriz resultante.*/
using namespace std;
int main() 
{
  setlocale (LC_ALL, "portuguese");
  int M1[3][4], M2[3][4], R[3][4], i, j;
  
  cout << "Matriz 1: \n";
  
  for (i=0; i<=2; i++){
    for (j=0; j<=3; j++)
    {
       cout <<"Digite o número da posição ["<< i+1 <<"][" << j+1 <<"]: ";
       cin >>M1[i][j];
     }}
     
     cout << "\nMatriz 2: \n";
     
     for (i=0; i<=2; i++){
    for (j=0; j<=3; j++)
    {
       cout <<"Digite o número da posição ["<< i+1 <<"][" << j+1 <<"]: ";
       cin >>M2[i][j];
     }}
     
     
  
  for (i=0; i<=2; i++){
    for (j=0; j<=3; j++)
    {
       R[i][j]= M1[i][j] + M2[i][j];
     }}
     
 cout << "\nO resultado das matrizes é: \n";
 
 for (i=0; i<=2; i++){
      for (j=0; j<=3; j++){
          cout <<R[i][j] << " ";}
      cout <<"\n";
  }
 getch();
}
