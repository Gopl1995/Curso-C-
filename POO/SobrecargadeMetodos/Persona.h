#include <iostream>

using namespace std;

class Persona{
    //Atributos
    private:
        string nombre;
        int edad;
        int dpi;

    //Metodos
    public:
        Persona(string _nombre, int _edad){ //Constructor 1
            nombre = _nombre;
            edad = _edad;
        }

        Persona(int _dpi){ //Constructor 2
            dpi = _dpi;
        }

        void correr(){
            cout<<"Soy: "<<nombre<<", tengo: "<<edad<<" anhos y estoy corriendo una maraton"<<endl;
        }

        void correr(int km){
            cout<<"He corrido "<<km<<" kilometros"<<endl;
        }

};
