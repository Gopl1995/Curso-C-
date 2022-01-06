#include <iostream>
#include <fstream>

using namespace std;
/*
-Abrir archivo
-Operar sobre el archivo
-Cerrar el archivo
CUANDO ES FLUJO DE SALIDA, EL ARCHIVO SE CREA AUTOMATICAMENTE
*/

int main(){
    ofstream salida;
    salida.open("archivo.txt");//abrir archivo---se guarda asi con esa ruta ya que estara guardada donde se almacena el programa
    //redireccion de flujo
    salida<<"Hola mundo"<<endl; //en lugar de ir a la consola, se vaya al objeto salida.
    salida.close();

    return 0;
}