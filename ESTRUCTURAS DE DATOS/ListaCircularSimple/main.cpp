#include <iostream>
#include"ListaCS.h"

using namespace std;

int main()
{
    ListaCS* lcs = new ListaCS();
    string nombrelcs;
    int edadlcs;
    int opcion;
    do{
        cout<<"ESCOJA UNA OPCION PARA INTERACTUAR CON LA LISTA CIRCULAR SIMPLE"<<endl;
        cout<<"1. Insertar datos a la Lista Circular Simple"<<endl;
        cout<<"2. Mostrar datos a la Lista Circular Simple"<<endl;
        cout<<"3. Modificar datos a la Lista Circular Simple"<<endl;
        cout<<"4. Eliminar datos a la Lista Circular Simple"<<endl;
        cout<<"5. Salir"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"Insertara datos a la Lista Circular Simple"<<endl;
                cout<<"Ingrese el nombre: "<<endl;
                cin>>nombrelcs;
                cout<<"Ingrese la edad: "<<endl;
                cin>>edadlcs;
                lcs->insertar(nombrelcs, edadlcs);
                break;
            case 2:
                cout<<"Mostrara datos a la Lista Circular Simple"<<endl;
                lcs->mostrar();
                break;
            case 3:
                cout<<"Modificara datos a la Lista Circular Simple"<<endl;
                lcs->modificar(nombrelcs);
                break;
            case 4:
                cout<<"Eliminara datos a la Lista Circular Simple"<<endl;
                lcs->eliminar();
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
