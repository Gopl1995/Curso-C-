#include <iostream>
#include <fstream>

using namespace std;
/*
-Abrir archivo
-Operar sobre el archivo
-Cerrar el archivo
*/

int main(){
    ifstream entrada;
    char linea [80]; //arreglo de caracteres
    entrada.open("archivo.txt");//abrir archivo---se guarda asi con esa ruta ya que estara guardada donde se almacena el programa
    //redireccion de flujo
    entrada.getline(linea,80); //este getline es para leer la linea con el arreglo maximo de caracteres
    cout<<linea<<endl;
    entrada.close();

    return 0;
}