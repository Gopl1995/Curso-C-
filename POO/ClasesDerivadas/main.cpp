#include <iostream>
#include "Triangulo.h"

using namespace std;

int main()
{
    Triangulo* t1 = new Triangulo(3, 4, 5, 7, 6);

    cout<<"El numero de lados es: "<<t1->getNumLados()<<endl;
    cout<<"Area: "<<t1->areaTriangulo()<<endl;
    return 0;
}
