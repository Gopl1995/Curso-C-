#include "Felino.h"
#include "GatoDomestico.h"
#include <iostream>

using namespace std;
/*Defina las clases Mamifero, Felino y GatoDomestico. Decida que atributos y metodos incluir de tal manera que su programa pueda:
1. Declarar un objeto llamado minino de tipo GatoDomestico y otro llamado estrellaCirco de tipo Felino.
2. Imprimir la dieta de minino y de estrellaCirco.
3. Imprimir el anho y lugar de nacimiento de minino y estrellaCirco.
4. Cambiar el nombre del duenho de minino.
5. Imprimir la raza de minino y de estrellaCirco.
6. Cambiar el nombre del circo en el que actua estrellaCirco.
*/

int main()
{
    GatoDomestico* minino = new GatoDomestico(2020, "Guatemala", "Angora", "Gustavo");
    Felino* estrellaCirco = new Felino(2021, "Italia", "Persa","Hermanos Lopez");

    cout<<"Datos Originales"<<endl;
    cout<<"Gato Domestico: minino "<<endl;
    cout<<"Anho de Nacimiento: "<<minino->getAnioNacimiento()<<endl;
    cout<<"Lugar de Nacimiento: "<<minino->getLugarNacimiento()<<endl;
    cout<<"Raza: "<<minino->getRaza()<<endl;
    cout<<"Duenho: "<<minino->getNombreDuenho()<<endl;
    cout<<endl;

    cout<<"Felino: estrellaCirco "<<endl;
    cout<<"Anho de Nacimiento: "<<estrellaCirco->getAnioNacimiento()<<endl;
    cout<<"Lugar de Nacimiento: "<<estrellaCirco->getLugarNacimiento()<<endl;
    cout<<"Raza: "<<estrellaCirco->getRaza()<<endl;
    cout<<"Circo: "<<estrellaCirco->getNombreCirco()<<endl;
    cout<<endl;

    cout<<"Dietas"<<endl;
    cout<<"Gato Domestico: "<<minino->imprimirDieta()<<endl;
    cout<<"Felino: "<<estrellaCirco->imprimirDieta()<<endl;
    cout<<endl;

    cout<<"Anho y Lugar de Nacimiento"<<endl;
    cout<<"Gato Domestico: "<<minino->getAnioNacimiento()<<"-"<<minino->getLugarNacimiento()<<endl;
    cout<<"Felino: "<<estrellaCirco->getAnioNacimiento()<<"-"<<estrellaCirco->getAnioNacimiento()<<endl;
    cout<<endl;

    cout<<"Cambio de nombre del duenho"<<endl;
    string nuevoduenho;
    cout<<"Ingrese el nuevo nombre: "<<endl;
    cin>>nuevoduenho;
    minino->setNombreDuenho(nuevoduenho);
    cout<<"El nuevo duenho es: "<<minino->getNombreDuenho()<<endl;
    cout<<endl;

    cout<<"Raza: "<<endl;
    cout<<"Gato Domestico: "<<minino->getRaza()<<endl;
    cout<<"Felino: "<<estrellaCirco->getRaza()<<endl;
    cout<<endl;

    cout<<"Cambio de nombre del circo"<<endl;
    string nuevocirco;
    cout<<"Ingrese el nuevo nombre: "<<endl;
    cin>>nuevocirco;
    estrellaCirco->setNombreCirco(nuevocirco);
    cout<<"El nuevo nombre es: "<<estrellaCirco->getNombreCirco()<<endl;
    cout<<endl;

    cout<<"Datos Nuevos"<<endl;
    cout<<"Gato Domestico: minino "<<endl;
    cout<<"Anho de Nacimiento: "<<minino->getAnioNacimiento()<<endl;
    cout<<"Lugar de Nacimiento: "<<minino->getLugarNacimiento()<<endl;
    cout<<"Raza: "<<minino->getRaza()<<endl;
    cout<<"Duenho: "<<minino->getNombreDuenho()<<endl;
    cout<<endl;

    cout<<"Felino: estrellaCirco "<<endl;
    cout<<"Anho de Nacimiento: "<<estrellaCirco->getAnioNacimiento()<<endl;
    cout<<"Lugar de Nacimiento: "<<estrellaCirco->getLugarNacimiento()<<endl;
    cout<<"Raza: "<<estrellaCirco->getRaza()<<endl;
    cout<<"Circo: "<<estrellaCirco->getNombreCirco()<<endl;


    return 0;
}
