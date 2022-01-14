#include <iostream>
#include "Perro.h"

using namespace std;

int main()
{
    Perro perrito1("Firulais", "Doberman");
    perrito1.mostrarDatos();
    perrito1.jugar();
    perrito1.~Perro();//destruyendo el objeto perrito1 de tipo estatico -> no hace falta destruirlo, ya que al finalizar el programa la memoria se libera

    Perro* perrito2 = new Perro("Osita", "Pastor Australiano");
    perrito2->mostrarDatos();
    perrito2->jugar();
    delete(perrito2);//destruyendo el objeto perrito2 de tipo dinamico

    perrito2->jugar();

    return 0;
}
