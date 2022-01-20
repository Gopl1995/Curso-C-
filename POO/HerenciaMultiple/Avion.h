#include<iostream>
using namespace std;

class Avion{
    private:
        string modelo;

    public:
        Avion(string modelo){
            this->modelo = modelo;
        }

        void indicarAvion(){
            cout<<"Desplazamiento por aire"<<endl;
        }

        string getModelo(){
            return modelo;
        }
};
