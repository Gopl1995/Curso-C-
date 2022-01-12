#include <iostream>
using namespace std;

struct Proveedor{
    char nombre [30];
    int cantidadVendida;
    float precioUnitario;
    float importe;
};

void llenarProveedores(Proveedor[], int);
Proveedor buscarMasCaro(Proveedor[], int);//tipo de retorno un proveedor
Proveedor buscarMasBarato(Proveedor[], int);
void mostrarProveedor(Proveedor);

int main(){
    Proveedor proveedores [30], masBarato, masCaro;
    int n = 5; //maximo 5 proveedores;

    llenarProveedores(proveedores, 5);
    masBarato = buscarMasBarato(proveedores, n);
    masCaro = buscarMasCaro(proveedores, n);
    cout<<"Proveedor mas barato: "<<endl;
    mostrarProveedor(masBarato);
    cout<<"Proveedor mas caro: "<<endl;
    mostrarProveedor(masCaro);
    return 0;
}

void llenarProveedores(Proveedor A [], int N){
    for (int i = 0; i < N; i++)
    {
        cout<<"Proveedor: "<<i+1<<endl;
        cout<<"Nombre: "<<endl;
        cin>>A[i].nombre;
        cout<<"Cantidad Vendida: "<<endl;
        cin>>A[i].cantidadVendida;
        cout<<"Precio Unitario: "<<endl;
        cin>>A[i].precioUnitario;
        A[i].importe = A[i].precioUnitario * A[i].cantidadVendida;
    }    
}

Proveedor buscarMasCaro(Proveedor A[], int n){
    Proveedor masCaro = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i].precioUnitario > masCaro.precioUnitario)
        {
            masCaro = A[i];
        }        
    }
    return masCaro;
}

Proveedor buscarMasBarato(Proveedor A[], int n){
    Proveedor masBarato = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i].precioUnitario < masBarato.precioUnitario)
        {
            masBarato = A[i];
        }        
    }
    return masBarato;
}

void mostrarProveedor(Proveedor p){
    cout<<"Nombre: "<<p.nombre<<endl;
    cout<<"Precio Unitario: "<<p.precioUnitario<<endl;
    cout<<"Cantidad Vendida: "<<p.cantidadVendida<<endl;
    cout<<"Importe: "<<p.importe<<endl;
}