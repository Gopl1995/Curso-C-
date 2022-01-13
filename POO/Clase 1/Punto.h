//Declaracion de una clase
#include <iostream>

class Punto{
    //Atributos
    private: //Solamente los metodos de esta misma clase pueden acceder a este contenido
        int x, y; //coordenadas x-y

    //Metodos
    public:

        Punto(int _x, int _y){ //argumentos
            x = _x; //el valor de _x sera almacenado en x
            y = _y; //el valor de _y sera almacenado en y
        }

        Punto(){ //Metodo constructor 2
            int x = 0;
            int y = 0;
        }

        void setX(int valorX); //Set es poner --> Se pone el valor de x
        void setY(int valorY); //Set es poner --> Se pone el valor de y

        int getX(); //Get es obtener --> Se obtiene el valor de x
        int getY(); //Get es obtener --> Se obtiene el valor de y
};

