#include <iostream>

using namespace std;

class NodoCola{
    private:

    public:
        string dato;
        NodoCola* siguiente = NULL; //esto se tiene que hacer nullo desde el principio
        NodoCola* primero = NULL;
        NodoCola* ultimo = NULL;

        NodoCola(){
        }

        void setDato(string dato){
            this->dato = dato;
        }

        string getDato(){
            return dato;
        }

        void setSiguiente(NodoCola *siguiente){
            this->siguiente = siguiente;
        }

        NodoCola* getSiguiente(){
            return siguiente;
        }

        void setPrimero(NodoCola *primero){
            this->primero = primero;
        }

        NodoCola* getPrimero(){
            return primero;
        }

        void setUltimo(NodoCola *ultimo){
            this->ultimo = ultimo;
        }

        NodoCola* getUltimo(){
            return ultimo;
        }

        void insertarNodo(){
            NodoCola* nuevo = new NodoCola(); //crea un nuevo nodo de tipo Cola
            cout<<"Ingrese el dato: "<<endl;
            cin>>nuevo->dato;
            if(primero == NULL){
                primero = nuevo;
                primero->siguiente = NULL;
                ultimo = primero;
            }else{
                ultimo->siguiente = nuevo;
                nuevo->siguiente = NULL;
                ultimo = nuevo;
            }
            cout<<"Nodo Ingresado"<<endl;
        }

        void buscarNodo(){
            NodoCola* actual = new NodoCola();
            actual = primero;
            bool encontrado = false;
            string buscado;
            cout<<"Ingrese el dato a buscar: "<<endl;
            cin>>buscado;
            if(primero != NULL){
                while(actual != NULL && encontrado != true){
                    if(actual->dato == buscado){
                        cout<<"Nodo encontrado, el nodo es: "<<buscado<<endl;
                        encontrado = true;
                    }
                    actual = actual->siguiente;
                }
                if(encontrado == false){
                    cout<<"Nodo no encontrado"<<endl;
                }
            }else{
                cout<<"Cola vacia"<<endl;
            }
        }

        void modificarNodo(){
            NodoCola* actual = new NodoCola();
            actual = primero;
            bool encontrado = false;
            string buscado;
            cout<<"Ingrese el dato a buscar: "<<endl;
            cin>>buscado;
            if(primero != NULL){
                while(actual != NULL && encontrado != true){
                    if(actual->dato == buscado){
                        cout<<"Nodo encontrado, el nodo es: "<<buscado<<endl;
                        cout<<"Ingrese el nuevo nodo: "<<endl;
                        cin>>actual->dato;
                        cout<<"Nodo modificado"<<endl;
                        encontrado = true;
                    }
                    actual = actual->siguiente;
                }
                if(encontrado == false){
                    cout<<"Nodo no encontrado"<<endl;
                }
            }else{
                cout<<"Cola vacia"<<endl;
            }
        }

        void eliminarNodo(){
            NodoCola* actual = new NodoCola();
            actual = primero;
            NodoCola* anterior = new NodoCola();
            anterior = NULL;
            bool encontrado = false;
            string buscado;
            cout<<"Ingrese el dato a eliminar: "<<endl;
            cin>>buscado;
            if(primero != NULL){
                while(actual != NULL && encontrado != true){
                    if(actual->dato == buscado){
                        cout<<"Nodo encontrado, el nodo es: "<<buscado<<endl;
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
                cout<<"Cola vacia"<<endl;
            }

        }

        void mostrarNodo(){
            NodoCola* actual = new NodoCola();
            actual = primero;
            if(primero != NULL ){
                while(actual != NULL){
                    cout<<actual->dato<<endl;
                    actual = actual->siguiente;
                }
            }else{
                cout<<"La cola se encuentra vacia"<<endl;
            }
        }
};

