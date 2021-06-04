#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    float celsius, farh;
    
    cout<<"Digite uma temperatura em Celsius: ";
    cin >> celsius;
    
    farh = ((9 *celsius)/5) +32;
    
    cout<<"Temperatura em fahrenheit:" <<farh<<"!";
    return 0;
}