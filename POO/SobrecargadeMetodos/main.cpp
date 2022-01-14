#include <iostream>
#include "Persona.h"

using namespace std;

int main()
{
    Persona* p1 = new Persona("Gustavo", 21);
    p1->correr();

    Persona* p2 = new Persona(2835916410101);
    p2->correr(25);

    return 0;
}
