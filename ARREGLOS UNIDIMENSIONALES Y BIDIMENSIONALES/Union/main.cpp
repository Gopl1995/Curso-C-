#include <iostream>
#define MAX 100
using namespace std;

int main(){
    /*
    Arreglo1 1 2 3 4
    Arreglo2 5 6 7 8
    ArregloFinal 1 2 3 4 5 6 7 8
    */
    int arreglo1[MAX], arreglo2[MAX], arreglo3[MAX*2];
    int contador1, contador2, contador3, contadore; //para que indique la cantidad de elementos ingresados a los arreglos

    do{
        cout<<"Ingrese la cantidad de elementos para el Arreglo 1"<<endl;
        cin>>contador1;
    }while(contador1>MAX || contador1<=0);

    for (int i = 0; i < contador1; i++){
        cout<<"Elementos del indice "<<i<<":";
        cin>>arreglo1[i];
    }    

    do{
        cout<<"Ingrese la cantidad de elementos para el Arreglo 2"<<endl;
        cin>>contador2;
    } while(contador2>MAX || contador2<=0);
    
    for (int i = 0; i < contador2; i++){
        cout<<"Elementos del indice "<<i<<":";
        cin>>arreglo2[i];
    }

    cout<<"Arreglo formado"<<endl;
    contadore = 0;
    contador3 = contador1+contador2;

    for (int i = 0; i < contador1 ; i++){
        arreglo3[contadore] = arreglo1[i];
        contadore++;
    }

    for (int i = 0; i < contador2; i++){
        arreglo3[contadore] = arreglo2[i];
        contadore++;
    }

    for (int i = 0; i < contador3; i++){
        cout<<arreglo3[i]<<" ";
    }    

    return 0;
}