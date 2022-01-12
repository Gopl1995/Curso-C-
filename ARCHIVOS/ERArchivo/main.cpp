#include <iostream>
#include <fstream>

using namespace std;


int main(){
    //renombrar -> rename(nombre de archivo, nuevo nombre)
    /***** ELIMINAR Y RENOMBAR ARCHIVO ******/
    //RENAME
        if(rename("Archivo.txt","nuevoArchivo.txt")==0){
            cout<<"El archivo se renombro con exito"<<endl;
        }
        else{
            cout<<"NO se pudo renombrar"<<endl;
    }
    /** REMOVE**/
    if(remove("nuevoArchivo.txt")==0){
        cout<<"Se elimino con exito"<<endl;
    }
    else{
        cout<<"NO se pudo eliminar"<<endl;
    }

    return 0;
}