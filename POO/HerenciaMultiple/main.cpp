#include <iostream>
#include"HidroAvion.h"

using namespace std;

int main()
{
    HidroAvion* h1 = new HidroAvion("Hidro1", "HA120", "512");
    h1->mostrarDatos();

    cout<<endl;

    h1->indicarBarco();//metodos no son de hidroavion pero si de sus clases base
    h1->indicarAvion();

    return 0;
}
