#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <iostream>

using namespace std;

class Mamifero{
    protected:
        int anhoNacimiento;
        string lugarNacimiento;
        string raza;

    public:
        Mamifero(int anhoNacimiento, string lugarNacimiento, string raza){
            this->anhoNacimiento = anhoNacimiento;
            this->lugarNacimiento = lugarNacimiento;
            this->raza = raza;
        }

        virtual string imprimirDieta() = 0; //metodo generico ya que la dieta de felino y gatodomestico sera diferente

        int getAnioNacimiento(){
            return anhoNacimiento;
        }

        string getLugarNacimiento(){
            return lugarNacimiento;
        }

        string getRaza(){
            return raza;
        }
};

#endif // MAMIFERO_H
