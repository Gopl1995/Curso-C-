//Creacion de Objetos

#include "Punto.h"
#include <iostream>

using namespace std;

int main(){
    Punto p1(2,1); //Objeto estatico

    cout<<"El valor de x es: "<<p1.getX()<<endl;
    cout<<"El valor de y es: "<<p1.getY()<<endl;

    Punto* p2 = new Punto(); //Objeto dinamico

    p2->setX(5);
    p2->setY(8);

    cout<<"El valor de x es: "<<p2->getX()<<endl;
    cout<<"El valor de y es: "<<p2->getY()<<endl;


    return 0;
}
