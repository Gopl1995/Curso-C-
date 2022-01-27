#include <iostream>

using namespace std;

class NodoLCD{
    private:
        string nombre;
        int edad;

    public:
        NodoLCD* siguiente;
        NodoLCD* atras;
        NodoLCD* primero;
        NodoLCD* ultimo;

        NodoLCD();

        void setNombre(string nombre);
        string getNombre();

        void setEdad(int edad);
        int getEdad();

};
