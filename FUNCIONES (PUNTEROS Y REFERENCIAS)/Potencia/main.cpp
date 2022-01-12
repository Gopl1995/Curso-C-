#include <iostream>
using namespace std;

int potencia(int, int);

int main(){
    cout<<potencia(2,3);

    return 0;
}

int potencia(int a, int b){
    int acumulador = 1;
    for (int i = 1; i <= b; i++)
    {
        acumulador = acumulador * a;
    }
    return acumulador;
}