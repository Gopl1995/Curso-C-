#include <iostream>

using namespace std;

class NodoLD{
    private:
        string nombre;
        int edad;

    public:
        NodoLD* siguiente;
        NodoLD* atras;
        NodoLD* primero;
        NodoLD* ultimo;

        NodoLD();

        void setNombre(string nombre);
        string getNombre();

        void setEdad(int edad);
        int getEdad();

        void setSiguiente(NodoLD* siguiente);
        NodoLD* getSiguiente();

        void setAtras(NodoLD* atras);
        NodoLD* getAtras();

        void setPrimero(NodoLD* primero);
        NodoLD* getPrimero();

        void setUltimo(NodoLD* ultimo);
        NodoLD* getUltimo();

};
