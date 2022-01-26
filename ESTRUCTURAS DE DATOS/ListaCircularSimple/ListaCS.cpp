#include "ListaCS.h"

#include<iostream>

using namespace std;

ListaCS::ListaCS(){
    siguiente = NULL;
    primero = NULL;
    ultimo = NULL;
}

void ListaCS::insertar(string nombre, int edad){
    NodoLCS* nuevo = new NodoLCS();
    nuevo->setNombre(nombre);
    nuevo->setEdad(edad);

    if(primero == NULL){
        primero = nuevo;
        primero->siguiente = primero;
        ultimo = primero;
    }else{
        ultimo->siguiente = nuevo;
        nuevo->siguiente = primero;
        ultimo = nuevo;
    }
    cout<<"Nodo ingresado"<<endl;
}

void ListaCS::mostrar(){
    NodoLCS* actual = new NodoLCS();
    actual = primero;
    if(primero != NULL){
        do{
            cout<<"Nombre: "<<actual->getNombre()<<endl;
            cout<<"Edad: "<<actual->getEdad()<<endl;
            actual = actual->siguiente;
        }while(actual != primero);
    }
    cout<<"Lista vacia"<<endl;
}

void ListaCS::modificar(string nombre){
    NodoLCS* actual = new NodoLCS();
    actual = primero;
    string buscado;
    string modificado;
    bool encontrado = false;
    cout<<"Ingrese el dato a modificar"<<endl;
    cin>>buscado;
    if(primero != NULL){
        do{
            if(actual->getNombre() == buscado){
                cout<<"Nodo encontrado"<<endl;
                cout<<"Ingrese el nuevo dato: "<<endl;
                cin>>modificado;
                nombre = modificado;
                actual->setNombre(nombre);
                cout<<"Nodo modificado"<<endl;
                encontrado = true;
            }actual = actual->siguiente;
        }while(actual != primero && encontrado != false);
        if(encontrado == false){
            cout<<"Nodo no encontrado"<<endl;
        }
    }else{
        cout<<"Lista vacia"<<endl;
    }
}

void ListaCS::eliminar(){
    NodoLCS* actual = new NodoLCS();
    actual = primero;
    NodoLCS* anterior = new NodoLCS();
    anterior = NULL;
    string buscado;
    bool encontrado = false;
    cout<<"Ingrese el dato a eliminar"<<endl;
    cin>>buscado;
    if(primero != NULL){
        do{
            if(actual->getNombre() == buscado){
                cout<<"Nodo encontrado"<<endl;
                if(actual == primero){
                    primero = primero->siguiente;
                    ultimo->siguiente = primero;
                }else if(actual == ultimo){
                    anterior->siguiente = primero;
                    ultimo = anterior;
                }else{
                    anterior->siguiente = actual->siguiente;
                }
                cout<<"Nodo eliminado"<<endl;
                encontrado = true;
            }
            anterior = actual;
            actual = actual->siguiente;
        }while(actual != primero && encontrado != true);
        if(encontrado == false){
            cout<<"Nodo no encontrado"<<endl;
        }
    }else{
        cout<<"Lista vacia"<<endl;
    }
}
