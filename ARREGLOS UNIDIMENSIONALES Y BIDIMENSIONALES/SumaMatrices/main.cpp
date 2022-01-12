#include <iostream>
#define MAX 100

using namespace std;

int main(){

    int A [MAX] [MAX];
    int B [MAX] [MAX];
    int C [MAX] [MAX];
    int n;

    cout<<"Ingrese el valor de n: "<<endl;
    cin>>n;

    cout<<"Matriz A"<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<"["<<i<<"] ["<<j<<"]: ";
            cin>>A[i][j];
        }       
    }

    cout<<"Matriz B"<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<"["<<i<<"] ["<<j<<"]: ";
            cin>>B[i][j];
        }       
    }

    cout<<"Matriz Total"<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            C[i][j]=A[i][j] + B[i][j];
            cout<<"El resultado es: "<<C[i][j]<<" ";
        }       
        cout<<endl;
    }    

    return 0;
}
