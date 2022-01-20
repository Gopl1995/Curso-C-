#include <iostream>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"

using namespace std;

int main()
{
    Poligono* poligonos[2]; //crea el objeto, no se instancia porque Poligono es clase abstracta

    poligonos[0] = new Rectangulo(2.5, 8.4); //en la primera posicion del poligono, se creara un rectangulo con sus respectivos atributos
    poligonos[1] = new Triangulo(2.2, 3.3, 4.4); //en la segunda posicion del poligono, se creara un triangulo con sus respectivos atributos

    for(int i=0; i<2; i++){
        cout<<"Area: "<<poligonos[i]->area()<<endl;
        cout<<"Perimetro: "<<poligonos[i]->perimetro()<<endl;
    }

    return 0;
}
