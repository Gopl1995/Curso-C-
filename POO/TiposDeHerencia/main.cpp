#include <iostream>
#include "Turismo.h"
#include "Deportivo.h"
#include "Furgoneta.h"
using namespace std;

int main()
{
    cout<<"HERENCIA PUBLICA"<<endl;
    Turismo* t1 = new Turismo("BMW", "Rojo", "A001", 4);
    cout<<"Color: "<<t1->getColor()<<endl;

    t1->setColor("Negro");
    cout<<"Color: "<<t1->getColor()<<endl;

    cout<<"Modelo: "<<t1->retornarModelo()<<endl; //se puede acceder a lo privado a traves de los metodos de la clase publica

    cout<<"HERENCIA PRIVADA"<<endl;
    Deportivo* d1 = new Deportivo("Ferrari", "Negro", "F10", 100);
    cout<<"Cilindrada: "<<d1->getCilindrada()<<endl;
    cout<<"Marca: "<<d1->retornarMarca()<<endl;

    cout<<"HERENCIA PROTEGIDA"<<endl;
    Furgoneta* f1 = new Furgoneta("Mazda", "Azul", "R10", 500);
    cout<<"Carga: "<<f1->getCarga()<<endl;
    cout<<"Color: "<<f1->retornarColor()<<endl;

    return 0;
}
