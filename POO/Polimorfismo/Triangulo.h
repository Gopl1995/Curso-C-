#include<iostream>
#include<math.h>
#include "Poligono.h"
using namespace std;

class Triangulo : public Poligono{
    private:
        float lado1, lado2, lado3;

    public:
        Triangulo(float lado1, float lado2, float lado3){
            this->lado1 = lado1;
            this->lado2 = lado2;
            this->lado3 = lado3;
        }

        float perimetro(){
            float perTri = (lado1+lado2+lado3);
            return perTri;
        }

        float area(){
            float s = (lado1+lado2+lado3)/2;
            float areaTri = sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
            return areaTri;
        }
};
