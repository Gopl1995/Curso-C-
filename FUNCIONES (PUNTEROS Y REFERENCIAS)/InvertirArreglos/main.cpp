#include <iostream>
using namespace std;

void invertir(int [], int);
/*
Entra: 1 2 3 4 5
Sale: 5 4 3 2 1
*/
void mostrarArreglo(int[], int);

int main(){

    int arreglo[]={5,4,3,2,1};
    mostrarArreglo(arreglo, 5);
    invertir(arreglo, 5);
    mostrarArreglo(arreglo, 5);      

    return 0;
}

void invertir(int A[], int n){
    for (int i = 0; i <= n/2; i++)
    {
        int aux = A[i];
        A[i] = A[n-1-i];
        A[n-1-i] = aux;
    }    
}

void mostrarArreglo(int A[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<endl;
}