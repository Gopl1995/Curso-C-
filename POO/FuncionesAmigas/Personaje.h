#include<iostream>

using namespace std;

class Personaje{
    friend void modificar(Personaje &, int, int); //uso de la funcion amiga

    private:
        int ataque;
        int defensa;

    public:
        Personaje(int ataque, int defensa){
            this->ataque = ataque;
            this->defensa = defensa;
        }

        void mostrarDatos(){
            cout<<"La fuerza de ataque es: "<<ataque<<endl;
            cout<<"La fuerza de defensa es: "<<defensa<<endl;
        }
};
