#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    float valorPrestacao, valorTaxa, prestacao;
    int tempoAtraso;
    
    cout<<"Informe o valor da prestação: ";
    cin >> valorPrestacao;
    
    cout<<"Informe o valor da taxa: ";
    cin >> valorTaxa;
    
    cout<<"Informe o tempo de atraso em dias: ";
    cin >> tempoAtraso;
    
    prestacao = valorPrestacao + (valorPrestacao * (valorTaxa/100) * tempoAtraso);
    
    cout<<"O novo valor a ser pago é de: " <<prestacao<<" reais";
    return 0;
}