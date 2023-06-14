#include <iostream>
using namespace std;

class Perro
{
  protected:
    string nombre = "";
    Perro madre;
    Perro padre;

  public:
    Perro();
    Perro(string _nombre);
    Perro(string _nombre, Perro &_madre, Perro &_padre);
    ~Perro();
    Perro& operator+(const Perro &_padre);
    void ladrar();
    void datos();
};

Perro::Perro(string _nombre) : nombre(_nombre){};

Perro::Perro(string _nombre, Perro &_madre, Perro &_padre) :
  nombre(_nombre),
  madre(Perro("") if !_madre),
  padre(_padre)
  {
  };

Perro::~Perro(){};

Perro& Perro::operator+(const Perro &_padre){
  Perro hijo("Sin nombre", *this, _padre);
  return hijo;
};

void Perro::ladrar(){
  cout << "Guau! Soy " << nombre;
}

void Perro::datos(){
  cout << "Nombre: " << nombre << endl;
  cout << "Padre: " << padre.nombre << endl;
  cout << "Madre: " << madre.nombre << endl;
}

int main(){
  Perro walter("Walter");
  Perro sara("Sara");

  Perro jonny = walter+sara;
  jonny.datos();
}

