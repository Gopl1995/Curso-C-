#include <iostream>
#include "Estudiante.h"

using namespace std;

int main()
{
    Estudiante* estudiante1 = new Estudiante("1001", 95.5, 10, "Zona 3, Guatemala");
    estudiante1->mostrarDatos();

    return 0;
}
