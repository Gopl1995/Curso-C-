#include<iostream>

using namespace std;

class Expediente{
    private:
        int numExpediente;

    public:
        Expediente(int numExpediente){
            this->numExpediente = numExpediente;
        }

        Expediente(){

        }

        ~Expediente(){

        }

        int getnumExpediente(){
            return numExpediente;
        }


};
