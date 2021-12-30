#include <iostream>
using namespace std;

int main(){
    int opcion;

    cout<<"Ingrese un numero del 1 al 12"<<endl;
    cin>>opcion;


    switch (opcion){
    case 1: cout<<"Mes de Enero";
        break;
    case 2: cout<<"Mes de Febrero";
        break;
    case 3: cout<<"Mes de Marzo";
        break;
    case 4: cout<<"Mes de Abril";
        break;
    case 5: cout<<"Mes de Mayo";
        break;
    case 6: cout<<"Mes de Junio";
        break; 
    case 7: cout<<"Mes de Julio";
        break;
    case 8: cout<<"Mes de Agosto";
        break;
    case 9: cout<<"Mes de Septiembre";
        break;
    case 10: cout<<"Mes de Octubre";
        break;
    case 11: cout<<"Mes de Noviembre";
        break;
    case 12: cout<<"Mes de Diciembre";
        break;   
    default: cout<<"Opcion incorrecta";
        break;
    }
    
    return 0;
}