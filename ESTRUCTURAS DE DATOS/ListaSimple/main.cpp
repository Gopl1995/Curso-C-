#include <iostream>
#include"ListaSimple.h"

using namespace std;

int main()
{
    ListaSimple* ls = new ListaSimple();
    string nombrels;
    int edadls;
    int opcion;

    do{
        cout<<"ESCOJA UNA OPCION PARA INTERACTUAR CON LA LISTA SIMPLE"<<endl;
        cout<<"1. Insertar datos a la Lista Simple"<<endl;
        cout<<"2. Mostrar datos a la Lista Simple"<<endl;
        cout<<"3. Modificar datos a la Lista Simple"<<endl;
        cout<<"4. Eliminar datos a la Lista Simple"<<endl;
        cout<<"5. Salir"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"Insertara datos a la Lista Simple"<<endl;
                cout<<"Ingrese el nombre: "<<endl;
                cin>>nombrels;
                cout<<"Ingrese la edad: "<<endl;
                cin>>edadls;
                ls->insertar(nombrels, edadls);
                break;
            case 2:
                cout<<"Mostrara datos a la Lista Simple"<<endl;
                ls->mostrar();
                break;
            case 3:
                cout<<"Modificara datos a la Lista Simple"<<endl;
                ls->modificar();
                break;
            case 4:
                cout<<"Eliminara datos a la Lista Simple"<<endl;
                ls->eliminar();
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
