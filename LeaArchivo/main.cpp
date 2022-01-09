#include <iostream>
#include <fstream>

using namespace std;

void pasarMayuscula(char cadena[]); //convertir una cadena leida del archivo a mayuscula
void pasarLineas(char origen[], char destino[]);

int main(){
    pasarLineas("archivo.txt", "archivo2.txt");

    return 0;
}

void pasarMayuscula(char cadena[]){
    int i=0;
    while (cadena[i]) //fin de linea !='\0' fin de linea es tratado como falso 
    {
        cadena[i] = toupper(cadena[i]);
        i++;
    }
    
}

void pasarLineas(char origen[], char destino[]){
    ifstream entrada;
    ofstream salida;
    char linea[254];
    entrada.open(origen);
    salida.open(destino);

    if (entrada.good())
    {
        while (!entrada.eof())
        {
            entrada.getline(linea,256);
            pasarMayuscula(linea);
            salida<<linea<<endl;
        }
        
    }else{
        cout<<"El archivo no existe"<<endl;
    }
    entrada.close();
    salida.close();
}