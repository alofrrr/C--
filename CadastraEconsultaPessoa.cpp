#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

/*Crie um algoritmo em C++ que permita armazenar o cpf, nome, peso e idade de 10 pessoas. Cada pessoa deve ser 
representada por uma struct dentro de um vetor. O programa deverá permitir consultar um cpf e deverá retornar as 
informações referentes a esta pessoa.*/
using namespace std;

struct Pessoa{
float cpf;
string nome;
float peso;
int idade;
};

int main(){
setlocale(LC_ALL, "portuguese");
Pessoa pessoa[10];
int i;
float ConsultarCpf;
    for (i=0; i<=9; i++){
    
    cout << "Informe o CPF da " << i+1 << "° pessoa:";
    cin >> pessoa[i].cpf;
    cout << "Informe o nome da " << i+1 << "° pessoa:";
    cin >> pessoa[i].nome;
    cout << "Informe o peso da " << i+1 << "° pessoa:";
    cin >> pessoa[i].peso;
    cout << "Informe a idade da " << i+1 << "° pessoa:";
    cin >> pessoa[i].idade;
}
    cout <<"Informe o CPF que deseja consultar: ";
    cin >> ConsultarCpf;

    for(i=0; i<=9; i++){
        if(pessoa[i].cpf == ConsultarCpf){
            cout <<"\nNome: " << pessoa[i].nome;
            cout <<"\nPeso: " << pessoa[i].peso;
            cout <<"\nIdade: " << pessoa[i].idade;
    }
}
getch();
}
