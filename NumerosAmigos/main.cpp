#include <iostream>
using namespace std;

bool sonAmigos(int, int);
int sumaDivisores(int);

int main(){

    if (sonAmigos(284,220))
    {
        cout<<"Son amigos"<<endl;
    }else{
        cout<<"No son amigos"<<endl;
    }
        

    return 0;
}

bool sonAmigos(int a, int b){
    if(sumaDivisores(a) == b && sumaDivisores(b)==a)
    {
        return true;
    }else
    {
        return false;
    }
}

int sumaDivisores(int n){
    int acumulador = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            acumulador = acumulador + i;
        }        
    }
    return acumulador;
}