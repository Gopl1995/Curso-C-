#include<iostream>
#include<math.h>
#include "Figura.h"

using namespace std;

class Triangulo:public Figura{ //estamos heredando de la clase Figura (todo lo publico de la clase figura, hace parte de todo lo publico de la clase triangulo)
    //hereda los atributos y metodos de la clase figura, tambien puede tener sus propios atributos
    private:
        float lado1, lado2, lado3, lado4;

    public: //se inicicalizan primero los atributos de la clase padre
        Triangulo(int numLados, float lado1, float lado2, float lado3, float lado4): Figura(numLados){
            this->lado1 = lado1;
            this->lado2 = lado2;
            this->lado3 = lado3;
            this->lado4 = lado4;
        }

        float areaTriangulo(){
            float p = (lado1+lado2+lado3)/2;
            float area = sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));
            return area;
        }

};
