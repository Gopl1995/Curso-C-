#include <iostream>
#include "Personaje.h"

using namespace std;

//Funcion para modificar los valores de ataque y defensa de un objeto Personaje
void modificar(Personaje &p, int a, int d){ //se le pasa como parametros el objeto, el ataque y la defensa
    p.ataque = a;
    p.defensa = d;
}

int main()
{
    Personaje* principal = new Personaje(50, 100);
    principal->mostrarDatos();

    modificar(*principal, 75, 85); //se le pasa el objeto se le pasa como puntero porque se le pasa como referencia en la funcion
    principal->mostrarDatos();

    return 0;
}
