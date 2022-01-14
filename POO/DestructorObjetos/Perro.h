//clase Perro

using namespace std;

class Perro{
    //Atributos
    private:
        string nombre;
        string raza;

    //Metodos
    public:

        Perro(string _nombre, string _raza){ //Constructor
            nombre = _nombre;
            raza = _raza;
        }

        ~Perro(){ //Destructor

        }

        void mostrarDatos();
        void jugar();

};
