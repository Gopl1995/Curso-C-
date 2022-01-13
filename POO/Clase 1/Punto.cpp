#include "Punto.h" //se utilizara el archivo de cabecera
#include <iostream>


//Se establece el valor de x
void Punto::setX(int valorX){
    x = valorX;
}

//Se establece el valor de y
void Punto::setY(int valorY){
    y = valorY;
}

//Se obtiene el valor de x
int Punto::getX(){
    return x;
}

//Se obtiene el valor de y
int Punto::getY(){
    return y;
}
