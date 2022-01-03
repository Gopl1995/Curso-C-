#include <iostream>
using namespace std;

//PROTOTIPO
void mensaje();
int suma(int a, int b);
bool esPar(int);

int main(){
    mensaje();
    suma(5,6);
    esPar(5);
    return 0;
}

void mensaje(){
    cout<<"Mensaje dentro de un procedimiento"<<endl;
}

int suma(int a, int b){
    int c = a + b;
    cout<<"La suma es: "<<c<<endl;
    return c;
}

bool esPar(int a){
    bool par;

    if(a % 2 == 0){
        par = true;
        cout<<"El numero es par - (verdadero)"<<endl;
        //return true;
    }else{
        par = false;
        cout<<"El numero es impar - (falso)"<<endl;
        //return false;
    }

    return par;
}