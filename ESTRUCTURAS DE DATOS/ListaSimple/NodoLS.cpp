#include "NodoLS.h"

#include <iostream>

using namespace std;

NodoLS::NodoLS(){
    NodoLS* siguiente = NULL;
    NodoLS* primero = NULL;
    NodoLS* ultimo = NULL;
}

void NodoLS::setNombre(string nombre){
    this->nombre = nombre;
}

string NodoLS::getNombre(){
    return nombre;
}

void NodoLS::setEdad(int edad){
    this->edad = edad;
}

int NodoLS::getEdad(){
    return edad;
}

void NodoLS::setSiguiente(NodoLS* siguiente){
    this->siguiente = siguiente;
}

NodoLS* NodoLS::getSiguiente(){
    return siguiente;
}

void NodoLS::setPrimero(NodoLS* primero){
    this->primero = primero;
}

NodoLS* NodoLS::getPrimero(){
    return primero;
}

void NodoLS::setUltimo(NodoLS* ultimo){
    this->ultimo = ultimo;
}

NodoLS* NodoLS::getUltimo(){
    return ultimo;
}
