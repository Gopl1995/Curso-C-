#include<iostream>
#include"Vehiculo.h"

using namespace std;

class Deportivo : private Vehiculo{
    private:
        int cilindrada;

    public:
        Deportivo(string marca, string color, string modelo, int cilindrada):Vehiculo(marca, color, modelo){
            this->cilindrada = cilindrada;
        }

        int getCilindrada(){
            return cilindrada;
        }

        string retornarMarca(){
            string mensaje = getMarca();
            return mensaje;
        }
};
