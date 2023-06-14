#include <iostream>
using namespace std;

class Perro
{
  protected:
  string nombre = "";

  public:
  Perro(string _nombre) : nombre(_nombre)
  {
  };
  ~Perro()
  {
  };

  void ladrar(){
  cout << "Guau! Soy " << nombre;
  }

};

int main(){
  Perro walter("Walter");
  walter.ladrar();
}
