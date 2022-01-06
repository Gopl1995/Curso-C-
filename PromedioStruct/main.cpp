#include <iostream>
using namespace std;

struct Alumno{
    char nombre [30];
    float n1, n2, n3, promedio;
};

void llenarAlumnos(Alumno[], int);
void mostrarAlumnos(Alumno[], int);
void ordenarPromedios(Alumno[], int);

int main(){
    Alumno  alumnos[30];
    int n = 4;
    llenarAlumnos(alumnos, n);
    ordenarPromedios(alumnos, n);
    mostrarAlumnos(alumnos, n);
    
    return 0;
}

void llenarAlumnos(Alumno A[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Alumno"<<i+1<<endl;
        cout<<"Nombre: "<<endl;
        cin>>A[i].nombre;
        cout<<"Nota 1: "<<endl;
        cin>>A[i].n1;
        cout<<"Nota 2: "<<endl;
        cin>>A[i].n2;
        cout<<"Nota 3: "<<endl;
        cin>>A[i].n3;
        cout<<endl;
        A[i].promedio = (A[i].n1 + A[i].n2 + A[i].n3) / 3;
    }    
}

void mostrarAlumnos(Alumno A[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Nombre: "<<A[i].nombre<<endl;
        cout<<"Nota 1: "<<A[i].n1<<endl;
        cout<<"Nota 2: "<<A[i].n2<<endl;
        cout<<"Nota 3: "<<A[i].n3<<endl;
        cout<<"Promedio: "<<A[i].promedio<<endl;
    }
}

void ordenarPromedios(Alumno A[], int n){//ordenamiento burbuja
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (A[j].promedio < A[j+1].promedio)
            {
                Alumno aux = A[j];
                A[j] = A[j+1];
                A[j] = A[j+1];
                A[j+1] = aux;
            }
                    
        }
        
    }
    
}

