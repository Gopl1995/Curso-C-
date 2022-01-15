#include <iostream>
#include "Estatico.h"

using namespace std;

int main()
{
    Estatico* objeto1 = new Estatico();
    Estatico* objeto2 = new Estatico();
    Estatico* objeto3 = new Estatico();

    cout<<objeto1->getContador()<<endl;

    cout<<"La suma es: "<<Estatico::sumar(5,4)<<endl;
    cout<<"La suma es: "<<objeto1->sumar(5,4)<<endl;

    //Cuando se crea un objeto, aumenta el contador.

    return 0;
}
