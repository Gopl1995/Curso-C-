//Guardian de inclusion multiple
#ifndef VEHICULO_H
#define VEHICULO_H

#include<iostream>
using namespace std;

class Vehiculo{
    public:
        Vehiculo(string marca, string color, string modelo){
            this->marca = marca;
            this->color = color;
            this->modelo = modelo;
        }

        string getMarca(){
            return marca;
        }

        string getColor(){
            return color;
        }

        void setColor(string color){
            this->color = color;
        }

    protected:
        string modelo;

        string getModelo(){
            return modelo;
        }

    private:
        string marca;
        string color;

};


#endif // VEHICULO_H
