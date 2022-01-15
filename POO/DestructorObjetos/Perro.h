//clase Perro

using namespace std;

class Perro{
    //Atributos
    private:
        string nombre;
        string raza;

    //Metodos
    public:

        Perro(string nombre, string raza){ //Constructor
            this->nombre = nombre;
            this->raza = raza;
        }

        ~Perro(){ //Destructor

        }

        void mostrarDatos();
        void jugar();

};
