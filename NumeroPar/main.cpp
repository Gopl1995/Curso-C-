#include <iostream>

using namespace std;
/*Ingrese un numero y verifique si es par o impar*/

int main()
{
    int numero;
    cout << "Ingrese cualquier numero: " << endl;
    cin >> numero;
    if(numero%2==0){
        cout<<"El numero es par";
    } else {
        cout <<"El numero es impar";
    }
    return 0;
}
