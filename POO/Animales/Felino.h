#ifndef FELINO_H
#define FELINO_H

#include <iostream>
#include "Mamifero.h"
using namespace std;

class Felino : public Mamifero{
    private:
        string nombreCirco;

    public:
        //sobrecarga de metodos
        Felino(int anhoNacimiento, string lugarNacimiento, string raza, string nombreCirco) : Mamifero(anhoNacimiento,lugarNacimiento,raza){
            this->nombreCirco = nombreCirco;
        }

        Felino(int anhoNacimiento, string lugarNacimiento, string raza) : Mamifero(anhoNacimiento,lugarNacimiento,raza){

        }

        string imprimirDieta(){
            return "Dieta basada en carnes";

        }

        void setNombreCirco(string nuevoNombre){
            this->nombreCirco = nuevoNombre;
        }

        string getNombreCirco(){
            return nombreCirco;
        }
};

#endif

