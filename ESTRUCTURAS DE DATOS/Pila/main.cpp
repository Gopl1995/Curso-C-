#include <iostream>
#include "NodoPila.h"

using namespace std;

int main(){
NodoPila* pila = new NodoPila();
    int opcion;
    do{
        cout << "ESCOJA UNA OPCION PARA INTERACTUAR CON LA PILA" << endl;
        cout<<"1. Insertar datos a la pila"<<endl;
        cout<<"2. Buscar dato en la pila"<<endl;
        cout<<"3. Modificar dato en la pila"<<endl;
        cout<<"4. Eliminar dato en la pila"<<endl;
        cout<<"5. Mostrar datos en la pila"<<endl;
        cout<<"6. Salir"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"Insertara datos a la pila"<<endl;
                pila->insertarNodo();
                break;
            case 2:
                cout<<"Buscar datos en la pila"<<endl;
                pila->buscarNodo();
                break;
            case 3:
                cout<<"Modificar datos a la pila"<<endl;
                pila->modificarNodo();
                break;
            case 4:
                cout<<"Eliminar datos a la pila"<<endl;
                pila->eliminarNodo();
                break;
            case 5:
                cout<<"Mostrar datos a la pila"<<endl;
                pila->mostrarNodo();
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
