#include "NodoLCS.h"
#include<iostream>

using namespace std;

NodoLCS::NodoLCS(){
    NodoLCS* siguiente = NULL;
    NodoLCS* primero = NULL;
    NodoLCS* ultimo = NULL;
}

void NodoLCS::setNombre(string nombre){
    this->nombre = nombre;
}

string NodoLCS::getNombre(){
    return nombre;
}

void NodoLCS::setEdad(int edad){
    this->edad = edad;
}

int NodoLCS::getEdad(){
    return edad;
}
