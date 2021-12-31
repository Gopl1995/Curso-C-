#include <iostream>
using namespace std;

int main(){
    /*
          a1 a2 an
valores    0 1 1 2 3 5 8
terminos   1 2 3 4 5 6 7<- posicion
    */
    int n, a1, a2, an;
    a1 = 0;
    a2 = 1;
    
    cout<<"Ingrese un numero"<<endl;
    cin>>n;

    if(n<2){
        cout<<"El n-esimo termino es: "<< n <<endl; //los dos primeros se repiten
    }else{
        for (int i = 2; i <=n; i++){
            an = a1+a2;
            a1 = a2;
            a2 = an;
        }
        cout<<"El n-esimo termino es: "<<an<<endl;
        
    }
}