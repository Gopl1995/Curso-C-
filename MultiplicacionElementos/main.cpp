#include <iostream>
#define MAX 5
using namespace std;

int main(){
    int arreglo1[MAX];
    int arreglo2[MAX];
    int arreglo3[5];

    cout<<"Arreglo 1: "<<endl;
    for (int i = 0; i < MAX; i++){
        cout<<"Indice "<<i<<":"<<endl;
        cin>>arreglo1[i];
    }
    
    cout<<"Arreglo 2: "<<endl;
    for (int i = 0; i < MAX; i++){
        cout<<"Indice "<<i<<":"<<endl;
        cin>>arreglo2[i];
    }
    
    cout<<"Arreglo resultante: "<<endl;
    for (int i = 0; i < 5; i++){
        //arreglo3[i]=arreglo1[i]*arreglo2[i];
        //cout<<arreglo3[i];
        cout<<arreglo1[i] <<"*"<<arreglo2[i]<<"="<<arreglo1[i] * arreglo2[i]<<'\n';
    }
    

    return 0;
}