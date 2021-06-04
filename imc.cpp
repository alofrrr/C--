#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    float peso, altura, imc;
    
    cout<<"Informe o seu peso: ";
    cin >> peso;
    
    cout<<"Informe a sua altura: ";
    cin >> altura;
    
    imc = peso / (altura*altura);
    
    cout<<"Seu indice de massa corporal é: " <<imc<<".";
    
    if(imc < 18.50){
        cout<<"Você está abaixo do peso ideal.";
    }else if(imc>= 18.50 && imc <= 24.9){
        cout<<"Você está no peso ideal.";
    }else if(imc > 24.50){
        cout<<" Você está acima do peso ideal.";
    }
    
    
    return 0;
}