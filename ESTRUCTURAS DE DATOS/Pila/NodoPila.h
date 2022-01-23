#include <iostream>

using namespace std;

class NodoPila{
    private:

    public:
        string dato;
        NodoPila* siguiente;
        NodoPila* primero;

        NodoPila(){
        }

        void setDato(string dato){
            this->dato = dato;
        }

        string getDato(){
            return dato;
        }

        void setSiguiente(NodoPila *siguiente){
            this->siguiente = siguiente;
        }

        NodoPila* getSiguiente(){
            return siguiente;
        }

        void setPrimero(NodoPila *primero){
            this->primero = primero;
        }

        NodoPila* getPrimero(){
            return primero;
        }

        void insertarNodo(){
            NodoPila* nuevo = new NodoPila(); //crea un nuevo nodo de tipo NodoPila
            cout<<"Ingrese el dato: "<<endl;
            cin>>nuevo->dato;
            nuevo->siguiente = primero;
            primero = nuevo;
            cout<<"Nodo ingresado"<<endl;
        }

        void buscarNodo(){
            NodoPila* actual = new NodoPila();
            actual = primero;
            string buscado;
            bool encontrado = false;
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
                cout<<"La pila esta vacia"<<endl;
            }
        }

        void modificarNodo(){
            NodoPila* actual = new NodoPila();
            actual = primero;
            string buscado;
            bool encontrado = false;
            cout<<"Ingrese el dato a buscar: "<<endl;
            cin>>buscado;
            if(primero != NULL){
                while(actual != NULL && encontrado != true){
                    if(actual->dato == buscado){
                        cout<<"Nodo encontrado, el nodo es: "<<buscado<<endl;
                        cout<<"Ingrese el nuevo dato: "<<endl;
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
                cout<<"La pila esta vacia"<<endl;
            }
        }

        void eliminarNodo(){
            NodoPila* actual = new NodoPila();
            actual = primero;
            NodoPila* anterior = new NodoPila();
            anterior = NULL;
            string buscado;
            bool encontrado = false;
            cout<<"Ingrese el dato a buscar: "<<endl;
            cin>>buscado;
            if(primero != NULL){
                while(actual != NULL && encontrado != true){
                    if(actual->dato == buscado){
                        cout<<"Nodo encontrado, el nodo es: "<<buscado<<endl;
                        if(actual == primero){
                            primero = primero->siguiente;
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
                cout<<"La pila esta vacia"<<endl;
            }
        }

        void mostrarNodo(){
            NodoPila *actual = new NodoPila();
            actual = primero;
            if(primero!=NULL){
                while(actual!=NULL){
                    cout<<actual->dato<<endl;
                    actual = actual->siguiente;
                }
            }else{
                cout<<"Pila vacia"<<endl;
            }
        }
};
