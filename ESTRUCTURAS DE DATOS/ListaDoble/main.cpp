#include <iostream>
#include "ListaDoble.h"

using namespace std;

int main()
{
    ListaDoble* ld = new ListaDoble();
    string nombreld;
    int edadld;
    int opcion;
    do{
        cout<<"ESCOJA UNA OPCION PARA INTERACTUAR CON LA LISTA DOBLE"<<endl;
        cout<<"1. Insertar datos a la Lista Doble"<<endl;
        cout<<"2. Mostrar datos a la Lista Doble"<<endl;
        cout<<"3. Modificar datos a la Lista Doble"<<endl;
        cout<<"4. Eliminar datos a la Lista Doble"<<endl;
        cout<<"5. Salir"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"Insertara datos a la Lista Doble"<<endl;
                cout<<"Ingrese el nombre: "<<endl;
                cin>>nombreld;
                cout<<"Ingrese la edad: "<<endl;
                cin>>edadld;
                ld->insertar(nombreld, edadld);
                break;
            case 2:
                cout<<"Mostrara datos a la Lista Doble"<<endl;
                ld->mostrar();
                break;
            case 3:
                cout<<"Modificara datos a la Lista Doble"<<endl;
                ld->modificar(nombreld);
                break;
            case 4:
                cout<<"Eliminara datos a la Lista Doble"<<endl;
                ld->eliminar();
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
