#include <iostream>
#include <fstream>

using namespace std;
/*
ios::binary -> modo binario
ios::ate -> La posicion inicial al final del archivo
ios::app -> Las operaciones se realizan al final del archivo
ios::trunc -> Si el archivo existe, se elimina su contenido
*/

int main(){
    ofstream salida;
    salida.open("archivo.txt", ios::app);
    salida<<"Linea 7"<<endl;
    salida<<"Linea 8"<<endl;
    salida<<"Linea 9"<<endl;
    salida.close();

    return 0;
}