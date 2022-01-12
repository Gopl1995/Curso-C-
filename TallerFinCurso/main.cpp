#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
//#define DIR_ARCHIVO "contactos.dat" <- esto tambien se puede hacer para definir la constante


using namespace std;

const char DIR_ARCHIVO [] = "contactos.dat";

struct Contacto{
    char nombre [30];
    char apellido [30];
    int edad;
    char correo [30];
};

void ingresarContacto(Contacto c); //se puede mandar como parametro el contacto para ingresarlo
Contacto leerContacto(); //tipo de retorno contacto
bool existeContacto(char nombre[], char apellido []);
Contacto buscarContacto(char nombre [], char apellido []);
void mostrarContacto(Contacto c);
void listarContactos();
void eliminarContacto(char nombre[], char apellido[]);
void actualizarContacto(char nombre[], char apellido[]);

/*
INGRESAR CONTACTO
BUSCAR CONTACTO
MOSTRAR CONTACTO
ELIMINAR CONTACTO
ACTUALIZAR CONTACTO
*/

void menuIngresar();
void menuBuscar();
void menuListado();
void menuEliminar();
void menuActualizar();

int main(){

    int op;

    do
    {
        cout<<"\t\t AGENDA"<<endl;
        cout<<"\t\t INGRESE UNA OPCION"<<endl;
        cout<<"\t\t 1. Ingresar contacto"<<endl;
        cout<<"\t\t 2. Buscar contacto"<<endl;
        cout<<"\t\t 3. Mostrar contacto"<<endl;
        cout<<"\t\t 4. Eliminar contacto"<<endl;
        cout<<"\t\t 5. Modificar contacto"<<endl;
        cout<<"\t\t 6. Salir"<<endl;
        cin>>op;

        switch (op)
        {
        case 1:
            system("cls");
            menuIngresar();
            break;
        case 2:
            system("cls");
            menuBuscar();
            break;
        case 3:
            system("cls");
            menuListado();
            break;
        case 4:
            system("cls");
            menuEliminar();
            break;
        case 5:
            system("cls");
            menuActualizar();
            break;
        case 6:
            break;
        default:
            cout<<"Opcion incorrecta"<<endl;
            break;
        }
        
    } while (op!=6);
    
    return 0;
}

void ingresarContacto (Contacto c){
    ofstream salida;
    salida.open(DIR_ARCHIVO, ios::binary | ios::app); //indica que es un archivo binario y que escriba al final del archivo, que no se elimine lo que se ha escrito/guardado
    salida.write((char*)&c, sizeof(Contacto));
    salida.close();
}

Contacto leerContacto(){
    Contacto c;
    cout<<"\t\t Nombre: ";
    cin>>c.nombre;
    cout<<"\t\t Apellido: ";
    cin>>c.apellido;
    cout<<"\t\t Edad: ";
    cin>>c.edad;
    cout<<"\t\t Correo: ";
    cin>>c.correo;
    return c;
}

bool existeContacto(char nombre[], char apellido []){
    Contacto c;
    ifstream entrada;
    entrada.open(DIR_ARCHIVO, ios::binary);
    if(entrada.good()){
        while(entrada.read((char*)&c, sizeof(Contacto))){
            //strcmp string comparation
            if(strcmp(nombre, c.nombre)==0 && strcmp(apellido, c.apellido) == 0){
                entrada.close();
                return true;
            }
        }
        entrada.close();
        return false;
    }else{
        entrada.close();
        return false;
    }
}

Contacto buscarContacto(char nombre [], char apellido []){
    Contacto c;
    ifstream entrada;
    entrada.open(DIR_ARCHIVO, ios::binary);
    if(entrada.good()){
        while(entrada.read((char*)&c, sizeof(Contacto))){
            //strcmp string comparation
            if(strcmp(nombre, c.nombre)==0 && strcmp(apellido, c.apellido) == 0){
                entrada.close();
                return c;
            }
        }
    }
} 

void mostrarContacto(Contacto c){
    cout<<"\t\t Nombre: "<<c.nombre<<endl;
    cout<<"\t\t Apellido: "<<c.apellido<<endl;
    cout<<"\t\t Edad: "<<c.edad<<endl;
    cout<<"\t\t Correo: "<<c.correo<<endl;
}

void listarContactos(){
    ifstream entrada;
    entrada.open(DIR_ARCHIVO, ios::binary);
    Contacto c;
    if(entrada.good()){
        while(entrada.read((char*)&c, sizeof(Contacto))){
            mostrarContacto(c);
        }        
    }else{
        cout<<"No se puede leer el archivo"<<endl;
    }
    entrada.close();
}

void eliminarContacto(char nombre[], char apellido[]){
    ifstream entrada;
    ofstream temporal;
    entrada.open(DIR_ARCHIVO, ios::binary);
    temporal.open("temp.dat", ios::binary);
    Contacto c;
    if(entrada.good()){
        while(entrada.read((char*)&c, sizeof(Contacto))){
            if(strcmp(nombre, c.nombre)!=0 || strcmp(apellido, c.apellido) != 0){
                temporal.write((char*)&c, sizeof(Contacto));
            }
        }        
    }
    entrada.close();
    temporal.close();
    remove(DIR_ARCHIVO);
    rename("temp.dat", DIR_ARCHIVO);
}

void actualizarContacto(char nombre[], char apellido[]){
    ifstream entrada;
    ofstream temporal;
    entrada.open(DIR_ARCHIVO, ios::binary);
    temporal.open("temp.dat", ios::binary);
    Contacto c;
    if(entrada.good()){
        while(entrada.read((char*)&c, sizeof(Contacto))){
            if(strcmp(nombre, c.nombre)!=0 && strcmp(apellido, c.apellido) != 0){
                Contacto actual = leerContacto();
                temporal.write((char*)&actual, sizeof(Contacto));
            }else{
                temporal.write((char*)&c, sizeof(Contacto));
            }
        }        
    }
    entrada.close();
    temporal.close();
    remove(DIR_ARCHIVO);
    rename("temp.dat", DIR_ARCHIVO);
}

void menuIngresar(){
    cout<<"\t\t Ingreso de nuevo contacto"<<endl;
    Contacto nuevo = leerContacto();
    ingresarContacto(nuevo);
    cout<<"\t\t Contacto ingresado!"<<endl;
}

void menuBuscar(){
    cout<<"\t\t Buscar contacto"<<endl;
    char nombre[30];
    char apellido[30];
    cout<<"\t\t Ingrese los datos a buscar"<<endl;
    cout<<"\t\t Nombre: ";
    cin>>nombre;
    cout<<"\t\t Apellido: ";
    cin>>apellido;
    if(existeContacto(nombre, apellido)){
        Contacto buscado = buscarContacto(nombre, apellido);
        mostrarContacto(buscado);
    }else{
        cout<<"No se encuentra el contacto"<<endl;
    }
}

void menuListado(){
    cout<<"\t\t Lista de contactos"<<endl;
    listarContactos();
}

void menuEliminar(){
    cout<<"\t\t Ingrese dato a eliminar"<<endl;
    char nombre[30];
    char apellido[30];
    cout<<"\t\t Ingrese los datos a buscar"<<endl;
    cout<<"\t\t Nombre: ";
    cin>>nombre;
    cout<<"\t\t Apellido: ";
    cin>>apellido;
    if(existeContacto(nombre, apellido)){
        Contacto eliminar = buscarContacto(nombre, apellido);
        int opcion;
        cout<<"Desea elminar el contacto?";
        mostrarContacto(eliminar);
        do
        {
            cout<<"Si[1]...No[2]";
            cin>>opcion;
            switch (opcion)
            {
            case 1: 
                eliminarContacto(nombre, apellido);
                cout<<"Se elimino el contacto"<<endl;
            break;
            case 2:
            break;            
            default:
                cout<<"Opcion incorrecta"<<endl;
                break;
            }
        } while (opcion!=1 && opcion!=2);        
        
    }else{
        cout<<"No se pudo eliminar, contacto no existe"<<endl;
    }
}

void menuActualizar(){
    cout<<"\t\t Ingrese dato a modificar"<<endl;
    char nombre[30];
    char apellido[30];
    cout<<"\t\t Ingrese los datos a buscar"<<endl;
    cout<<"\t\t Nombre: ";
    cin>>nombre;
    cout<<"\t\t Apellido: ";
    cin>>apellido;
    if(existeContacto(nombre, apellido)){
        Contacto buscado = buscarContacto(nombre, apellido);
        cout<<"Registro a modificar"<<endl;
        mostrarContacto(buscado);
        actualizarContacto(nombre, apellido);
        cout<<"Se actualizo el registro"<<endl;
    }else{
        cout<<"No se pudo eliminar, contacto no existe"<<endl;
    }
}