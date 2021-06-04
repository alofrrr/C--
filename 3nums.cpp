#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    float n1, n2, n3;
    
    cout<<"Informe o 1° número: ";
    cin >> n1;
    
    if(n1 > 0){
        cout<<"A raiz quadrada do número "<<n1<<" é: ";
        cout<< sqrt(n1) <<endl;
    }else{
        cout<<"O quadrado do número "<<n1<<" é: ";
        cout<< n1 * n1 <<endl;
    }
    
    cout<<"Informe o 2° número: ";
    cin >> n2;
    
    if(n2 > 10 && n2<100){
        cout<<"O número "<<n2<<" está entre 10 e 100 – intervalo permitido";
    }else{
        cout<<"O número "<<n2<<" não está entre 10 e 100 – número não permitido";
    }
    
    cout<<"\nInforme o 3° número: ";
    cin >> n3;
    
    if(n2 > n3){
        cout<<"A diferença entre os números é de: "<<n2-n3<<".";
    }else{
        cout<<"O número somado com 1 resulta em "<<n3+1<<".";
    }
    return 0;
}