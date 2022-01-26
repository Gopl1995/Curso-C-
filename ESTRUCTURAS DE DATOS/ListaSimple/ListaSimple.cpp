#include "ListaSimple.h"

#include <iostream>

using namespace std;

ListaSimple::ListaSimple(){
    siguiente = NULL;
    primero = NULL;
    ultimo = NULL;
}

void ListaSimple::insertar(string nombre, int edad){
    NodoLS* nuevo = new NodoLS();
    nuevo->setNombre(nombre);
    nuevo->setEdad(edad);

    if(primero==NULL){
        primero = nuevo;
        primero->siguiente = NULL;
        ultimo = nuevo;
    }else{
        ultimo->siguiente = nuevo;
        nuevo->siguiente = NULL;
        ultimo = nuevo;
    }
    cout<<"Nodo ingresado"<<endl;
}

void ListaSimple::mostrar(){
    NodoLS* actual = new NodoLS();
    actual = primero;
    if(primero != NULL){
        while(actual != NULL){
            cout<<"Nombre: "<<actual->nombre<<endl;
            cout<<"Edad: "<<actual->edad<<endl;
            actual = actual->siguiente;
        }
    }else{
        cout<<"La lista se encuentra vacia"<<endl;
    }
}

void ListaSimple::modificar(){
    NodoLS* actual = new NodoLS();
    actual = primero;
    string buscado;
    bool encontrado = false;
    cout<<"Ingrese el dato a modificar: "<<endl;
    cin>>buscado;
    if(primero != NULL){
        while(actual != NULL && encontrado != true){
            if(actual->nombre == buscado){
                cout<<"Nodo encontrado"<<endl;
                cout<<"Ingrese el nuevo dato"<<endl;
                cin>>actual->nombre;
                cout<<"Nodo modificado"<<endl;
                encontrado = true;
            }actual = actual->siguiente;
        }
        if(encontrado == false){
            cout<<"Nodo no encontrado"<<endl;
        }
    }else{
        cout<<"Lista vacia"<<endl;
    }
}

void ListaSimple::eliminar(){
    NodoLS* actual = new NodoLS();
    actual = primero;
    NodoLS* anterior = new NodoLS();
    anterior = NULL;
    string buscado;
    bool encontrado = false;
    cout<<"Ingrese nodo a eliminar"<<endl;
    cin>>buscado;
    if(primero!=NULL){
        while(actual != NULL && encontrado != true){
            if(actual->nombre == buscado){
                cout<<"Nodo encontrado"<<endl;
                if(actual == primero){
                    primero = primero->siguiente;
                }else if(actual == ultimo){
                    anterior->siguiente = NULL;
                    ultimo = anterior;
                }else{
                    anterior->siguiente = actual->siguiente;
                }
                cout<<"Nodo eliminado"<<endl;
                encontrado = true;
            }
            anterior = actual;
            actual = actual->siguiente;
        }
        if(encontrado == false){
            cout<<"Nodo no encontrado"<<endl;
        }
    }else{
        cout<<"Lista vacia"<<endl;
    }
}
