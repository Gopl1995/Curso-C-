#include <iostream>
#include "DiaAnio.h"

using namespace std;

int main()
{
    DiaAnio* hoy;
    DiaAnio* cumple;

    int d;
    int m;

    cout<<"Ingrese la fecha de hoy"<<endl;
    cout<<"Dia: ";
    cin>>d;
    cout<<"Mes: ";
    cin>>m;

    hoy = new DiaAnio(d,m);

    cout<<"Ingrese la fecha de cumpleanhos"<<endl;
    cout<<"Dia: ";
    cin>>d;
    cout<<"Mes: ";
    cin>>m;

    cumple = new DiaAnio(d,m);

    hoy->visualizar();
    cout<<endl;
    cumple->visualizar();
    cout<<endl;

    if(hoy->igual(*cumple)){
        cout<<"HBD"<<endl;
    }else{
        cout<<"Buen dia"<<endl;
    }

    return 0;
}
