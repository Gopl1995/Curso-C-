#include <iostream>
#define MAX 100

using namespace std;

int main(){
    /*
    6 5 4       
    3 2 1
    -----MATRIZ TRANSPUESTA---
    6 3
    5 2
    4 1
    */

    int A[][3]={{6,5,4},{3,2,1}}; //2 filas y 3 columnas
    int filas = 2, columnas = 3;
    int B[filas][columnas];

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            B[j][i] = A[i][j];//se invierten los valores
        }        
    }

    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            cout<<B[i][j]<<" ";
        } 
        cout<<endl;       
    }    
    return 0;
}