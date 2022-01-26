#include <iostream>

using namespace std;

class NodoLCS{
    private:
        string nombre;
        int edad;

    public:
        NodoLCS* siguiente;
        NodoLCS* primero;
        NodoLCS* ultimo;

        NodoLCS();

        void setNombre(string nombre);
        string getNombre();

        void setEdad(int edad);
        int getEdad();
};
