#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

float CpF(float c){
	float f;
	
	f = ((9 *c)/5) +32;
	
	return f;
}


int main()
{
    setlocale (LC_ALL, "portuguese");
    float celsius, r;
    
    cout << "Conversor de graus Centígrados para Fahrenheit\n\n";
    cout<<"Digite uma temperatura em Centígrados: ";
    cin >> celsius;
    
    r = CpF(celsius);
    
    cout<<"Temperatura em Fahrenheit:" <<r<<"!";
    return 0;
}
