//Clase compuesta...lleva entre atributos, objetos de otras clases

#include<iostream>
#include "Expediente.h"
#include "Direccion.h"
using namespace std;

class Estudiante{
    private:
        string codigo;
        float promedio;
        Expediente exp;
        Direccion dir;

    public:
        Estudiante(string codigo, float promedio, int numExpediente, string direccion):exp(numExpediente), dir(direccion){
            this->codigo = codigo;
            this->promedio = promedio;
        }

        void mostrarDatos(){
            cout<<"Codigo: "<<codigo<<endl;
            cout<<"Promedio: "<<promedio<<endl;
            cout<<"Numero de Expediente: "<<exp.getnumExpediente()<<endl;
            cout<<"Direccion: "<<dir.getDireccion()<<endl;
        }

};
