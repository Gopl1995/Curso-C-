#include <iostream>
#include "ListaCD.h"

using namespace std;

int main()
{
    ListaCD* lcd = new ListaCD();
    string nombrelcd;
    int edadlcd;
    int opcion;
    do{
        cout<<"ESCOJA UNA OPCION PARA INTERACTUAR CON LA LISTA CIRCULAR DOBLE"<<endl;
        cout<<"1. Insertar datos a la Lista Circular Doble"<<endl;
        cout<<"2. Mostrar datos a la Lista Circular Doble"<<endl;
        cout<<"3. Modificar datos a la Lista Circular Doble"<<endl;
        cout<<"4. Eliminar datos a la Lista Circular Doble"<<endl;
        cout<<"5. Salir"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"Insertara datos a la Lista Circular Doble"<<endl;
                cout<<"Ingrese el nombre: "<<endl;
                cin>>nombrelcd;
                cout<<"Ingrese la edad: "<<endl;
                cin>>edadlcd;
                lcd->insertar(nombrelcd, edadlcd);
                break;
            case 2:
                cout<<"Mostrara datos a la Lista Circular Doble"<<endl;
                lcd->mostrar();
                break;
            case 3:
                cout<<"Modificara datos a la Lista Circular Doble"<<endl;
                lcd->modificar(nombrelcd);
                break;
            case 4:
                cout<<"Eliminara datos a la Lista Circular Doble"<<endl;
                lcd->eliminar();
                break;
            case 5:
                cout<<"Fin del programa"<<endl;
                break;
            default:
                cout<<"Opcion ingresada no valida"<<endl;
                break;
        }
    }while(opcion!=5);

    return 0;
}
