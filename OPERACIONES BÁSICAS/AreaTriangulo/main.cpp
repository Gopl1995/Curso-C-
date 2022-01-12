#include <iostream>

using namespace std;

/* Escriba un programa que permita encontrar el area de un triangulo */

int main()
{
    int base, altura;
    cout << "Se encontrara el area de un triangulo" << endl;
    cout << "Ingrese la base del triangulo: "<< endl;
    cin >> base;
    cout << "Ingrese la altura del triangulo: " << endl;
    cin >> altura;
    int resultado = (base*altura)/2;
    cout << "El area del triangulo es: " << resultado << endl;
    return 0;
}
