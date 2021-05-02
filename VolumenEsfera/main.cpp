#include <iostream>

using namespace std;

/* Escriba un programa que permita encontrar el volumen de una esfera */

int main()
{
    cout <<"Se calculara el volumen de una esfera" << endl;
    float radio;
    const float pi = 3.1416;
    cout << "Ingrese el radio de la esfera: " << endl;
    cin >> radio;
    float resultado = (4/3)*pi*radio*radio*radio;
    cout <<"El volumen de la esfera es: " <<resultado <<endl;
    return 0;
}
