#include "NodoLD.h"
#include<iostream>

using namespace std;

NodoLD::NodoLD(){
    NodoLD* siguiente = NULL;
    NodoLD* atras = NULL;
    NodoLD* primero = NULL;
    NodoLD* ultimo = NULL;
}

void NodoLD::setNombre(string nombre){
    this->nombre = nombre;
}

string NodoLD::getNombre(){
    return nombre;
}

void NodoLD::setEdad(int edad){
    this->edad = edad;
}

int NodoLD::getEdad(){
    return edad;
}


void NodoLD::setSiguiente(NodoLD* siguiente){
    this->siguiente = siguiente;
}

NodoLD* NodoLD::getSiguiente(){
    return siguiente;
}

void NodoLD::setAtras(NodoLD* atras){
    this->atras = atras;
}

NodoLD* NodoLD::getAtras(){
    return atras;
}

void NodoLD::setPrimero(NodoLD* primero){
    this->primero = primero;
}

NodoLD* NodoLD::getPrimero(){
    return primero;
}

void NodoLD::setUltimo(NodoLD* ultimo){
    this->ultimo = ultimo;
}

NodoLD* NodoLD::getUltimo(){
    return ultimo;
}
