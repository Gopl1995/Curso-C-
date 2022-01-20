#include<iostream>
using namespace std;

class Barco{
    public:
        Barco(string nombre) {
            this->nombre = nombre;
        }

        void indicarBarco(){
            cout<<"Desplazamiento por agua"<<endl;
        }

        string getNombre(){
            return nombre;
        }

    protected:

    private:
        string nombre;
};
