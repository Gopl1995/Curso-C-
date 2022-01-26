#include "ListaDoble.h"

#include<iostream>

using namespace std;

ListaDoble::ListaDoble(){
    siguiente = NULL;
    //anterior = NULL;
    primero = NULL;
    ultimo = NULL;
}

void ListaDoble::insertar(string nombre, int edad){
    NodoLD* nuevo = new NodoLD();
    nuevo->setNombre(nombre);
    nuevo->setEdad(edad);

    if(primero == NULL){
        primero = nuevo;
        primero->siguiente = NULL;
        primero->atras = NULL;
        ultimo = primero;
    }else{
        ultimo->siguiente = nuevo;
        nuevo->siguiente = NULL;
        nuevo->atras = ultimo;
        ultimo = nuevo;
    }
    cout<<"Nodo ingresado"<<endl;
}

void ListaDoble::mostrar(){
    NodoLD* actual = new NodoLD();
    actual = primero;
    if(primero != NULL){
        while(actual != NULL){
            cout<<"Nombre: "<<actual->getNombre()<<endl;
            cout<<"Edad: "<<actual->getEdad()<<endl;
            actual = actual->siguiente;
        }
    }else{
        cout<<"La lista se encuentra vacia"<<endl;
    }
}

void ListaDoble::modificar(string nombren){
    NodoLD* actual = new NodoLD();
    actual = primero;
    string buscado;
    string nuevonom;
    bool encontrado = false;
    cout<<"Ingrese el dato a modificar"<<endl;
    cin>>buscado;
    if(primero != NULL){
        while(actual != NULL && encontrado != true){
            if(actual->getNombre() == buscado){
                cout<<"Nodo encotrado"<<endl;
                cout<<"Ingrese el nuevo dato: "<<endl;
                cin>>nuevonom;
                nombren = nuevonom;
                actual->setNombre(nombren);
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

void ListaDoble::eliminar(){
    NodoLD* actual = new NodoLD();
    actual = primero;
    NodoLD* anterior = new NodoLD();
    anterior = NULL;
    string buscado;
    bool encontrado = false;
    cout<<"Ingrese el nombre a eliminar"<<endl;
    cin>>buscado;
    if(primero != NULL){
        while(actual != NULL && encontrado != true){
            if(actual->getNombre() == buscado){
                cout<<"Nodo encontrado"<<endl;
                if(actual == primero){
                    primero = primero->siguiente;
                    primero->atras = NULL;
                }else if(actual == ultimo){
                    anterior->siguiente = NULL;
                    ultimo = anterior;
                }else{
                    anterior->siguiente = actual->siguiente;
                    actual->siguiente->atras = anterior;
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
