#include<iostream>
#include "Barco.h"
#include "Avion.h"
using namespace std;

class HidroAvion:public Barco, public Avion{
    private:
        string codigo;

    public:
        HidroAvion(string nombre, string modelo, string codigo): Barco(nombre), Avion(modelo){ //primero van los atributos de la clase base
            this->codigo = codigo;
        }

        string getCodigo(){
            return codigo;
        }

        void mostrarDatos(){
            cout<<"El nombre es: "<<getNombre()<<endl;
            cout<<"El modelo es: "<<getModelo()<<endl;
            cout<<"El codigo es: "<<codigo<<endl;
        }
};
