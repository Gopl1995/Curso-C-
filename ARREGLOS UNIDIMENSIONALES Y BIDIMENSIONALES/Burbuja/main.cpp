#include <iostream>
#define MAX 5
using namespace std;

int main(){
    /*
    ---condicion que los menores se encuentren a la izquierda y mayores a la derecha
    6 5 3 1 7 4 2 -> 5 6 3 1 7 4 2 -> 5 3 6 1 7 4 2 -> 5 3 1 6 7 4 2
    5 3 1 6 4 7 2 -> 5 3 1 6 4 2 7 -----PASO 1
    3 5 1 6 4 2 7 -> 3 1 5 6 4 2 7 -> 3 1 5 4 6 2 7 -> 3 1 5 4 2 6 7 ----PASO 2
    1 3 5 4 2 6 7 -> 1 3 4 5 2 6 7 -> 1 3 4 2 5 6 7 -----PASO 3
    1 3 2 4 5 6 7 -----PASO 4
    1 2 3 4 5 6 7 -----PASO 5 ULTIMO    
    */    

    int A[]={6,5,9,3,0,1,8,7,4,2};
    for (int i = 0; i < 10; i++){ //solo para recorrer el arreglo
        for (int j = 0; j < 9; j++){ //ya que el ultimo no tiene comparacion
            if (A[j]>A[j+1]){ //si se quiere de forma ascendente se cambia el menor que
                int aux = A[j]; //guardar en una variable auxiliar el valor
                A[j] = A[j+1];
                A[j+1] = aux;
            }            
        }        
    }

    for (int j = 0; j < 10; j++){ //hasta 10 porque lo vamos a mostrar
            cout<<A[j]<<" ";                         
        }    
    

    return 0;
}