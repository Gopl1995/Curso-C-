#include<iostream>
#include"Vehiculo.h"

using namespace std;

class Turismo :  public Vehiculo{ //heredara lo publico de la clase base y lo protegido lo hereda como protegido
    public:
        Turismo(string marca, string color, string modelo, int numPuertas):Vehiculo(marca, color, modelo){
            this->numPuertas = numPuertas;
        }

        int getNumPuertas(){
            return numPuertas;
        }

        ~Turismo(){

        }

        string retornarModelo(){
            string mensaje = getModelo();
            return mensaje;
        }

    protected:

    private:
        int numPuertas;
};
