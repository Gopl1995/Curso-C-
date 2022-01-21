#include <iostream>
#include "Felino.h"

using namespace std;

class GatoDomestico : public Felino{
    private:
        string nombreDuenho;

    public:
        GatoDomestico(int anhoNacimiento, string lugarNacimiento, string raza, string nombreDuenho) : Felino (anhoNacimiento,lugarNacimiento,raza){
            this->nombreDuenho = nombreDuenho;
        }

        string imprimirDieta(){
            return "La dieta del gato domestico esta basada en pescado";

        }

        void setNombreDuenho(string nuevoDuenho){
            this->nombreDuenho = nuevoDuenho;
        }

        string getNombreDuenho(){
            return nombreDuenho;
        }
};
