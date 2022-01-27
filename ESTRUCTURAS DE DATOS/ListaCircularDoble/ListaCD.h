#ifndef LISTACD_H
#define LISTACD_H

#include "NodoLCD.h"
#include <iostream>

using namespace std;

class ListaCD{
    private:

    public:
        NodoLCD* siguiente;
        NodoLCD* atras;
        NodoLCD* primero;
        NodoLCD* ultimo;

        ListaCD();
        void insertar(string nombre, int edad);
        void mostrar();
        void eliminar();
        void modificar(string nombre);
        //void graficar();
};

#endif // LISTACD_H
