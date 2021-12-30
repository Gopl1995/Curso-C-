#include <iostream>
using namespace std;

int main(){
    int numero;
    int contador = 0;

    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    while (numero!=0){
        numero = numero/10;
        contador++;
    }

    cout<<"La cantidad de digitos es: "<<contador<<endl;    
    

    return 0;
}