#include <iostream>
#include "Planta.h"
#include "AnimalCarnivoro.h"
#include "AnimalHerviboro.h"

using namespace std;

int main()
{
    Planta* planta1 = new Planta();
    planta1->alimentarse();

    AnimalCarnivoro* lobo = new AnimalCarnivoro();
    lobo->alimentarse();

    AnimalHerviboro* camello = new AnimalHerviboro();
    camello->alimentarse();

    return 0;
}
