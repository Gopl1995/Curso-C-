#include <iostream>

using namespace std;

class NodoLS{
    private:

    public:
        string nombre;
        int edad;
        NodoLS* siguiente;
        NodoLS* primero;
        NodoLS* ultimo;

        NodoLS();

        void setNombre(string nombre);
        string getNombre();

        void setEdad(int edad);
        int getEdad();

        void setSiguiente(NodoLS* siguiente);
        NodoLS* getSiguiente();

        void setPrimero(NodoLS* primero);
        NodoLS* getPrimero();

        void setUltimo(NodoLS* ultimo);
        NodoLS* getUltimo();

};
