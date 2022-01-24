#include <iostream>
#include "NodoCola.h"

using namespace std;

int main(){

    NodoCola* cola = new NodoCola();
    int opcion;
    do{
        cout << "ESCOJA UNA OPCION PARA INTERACTUAR CON LA COLA" << endl;
        cout<<"1. Insertar datos a la cola"<<endl;
        cout<<"2. Buscar dato en la cola"<<endl;
        cout<<"3. Modificar dato en la cola"<<endl;
        cout<<"4. Eliminar dato en la cola"<<endl;
        cout<<"5. Mostrar datos en la cola"<<endl;
        cout<<"6. Salir"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"Insertara datos a la cola"<<endl;
                cola->insertarNodo();
                break;
            case 2:
                cout<<"Buscar datos en la cola"<<endl;
                cola->buscarNodo();
                break;
            case 3:
                cout<<"Modificar datos a la cola"<<endl;
                cola->modificarNodo();
                break;
            case 4:
                cout<<"Eliminar datos a la cola"<<endl;
                cola->eliminarNodo();
                break;
            case 5:
                cout<<"Mostrar datos a la cola"<<endl;
                cola->mostrarNodo();
                break;
            case 6:
                cout<<"Fin del programa"<<endl;
                break;
            default:
                cout<<"Opcion ingresada no valida"<<endl;
                break;
        }
    }while(opcion!=6);

    return 0;
}
