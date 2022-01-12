#include <iostream>
using namespace std;

struct Persona{
    char nombre [30]; //campos
    char apellido [30];
    int edad;
};

int main(){
    Persona p;

    cout<<"Ingrese el nombre: "<<endl;
    cin>>p.nombre;
    //cin.getline(p.nombre, 30); -->esto tambien funciona
    cout<<"Ingrese el apellido: "<<endl;
    cin>>p.apellido;
    cout<<"Ingrese la edad: "<<endl;
    cin>>p.edad;
    cout<<"Mostrando datos: "<<endl;
    cout<<p.nombre<<endl;
    cout<<p.apellido<<endl;
    cout<<p.edad<<endl;

    return 0;
}