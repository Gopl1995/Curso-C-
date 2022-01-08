#include <iostream>
#include <fstream>

using namespace std;


int main(){
    ifstream entrada;
    char linea[80];
    entrada.open("archivo.txt");
    while(!entrada.eof()){ //mientras no sea el fin del archivo
        entrada.getline(linea,80); //lea las lineas
        cout<<linea<<endl;
    }

    entrada.close();

    return 0;
}