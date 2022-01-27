#include "NodoLCD.h"
#include<iostream>

using namespace std;

NodoLCD::NodoLCD(){
    NodoLCD* siguiente = NULL;
    NodoLCD* atras = NULL;
    NodoLCD* primero = NULL;
    NodoLCD* ultimo = NULL;
}

void NodoLCD::setNombre(string nombre){
    this->nombre = nombre;
}

string NodoLCD::getNombre(){
    return nombre;
}

void NodoLCD::setEdad(int edad){
    this->edad = edad;
}

int NodoLCD::getEdad(){
    return edad;
}
