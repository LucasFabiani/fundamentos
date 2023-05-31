#include <iostream>
using namespace std;

/*
EJERICIO N

hacer un programa en c++ que lea dos números,
y acumule las sumas hasta que el resultado de
las sumas sea un numero impar.
Al final mostrar por pantalla el resultado acumulado.
*/

int main(){
    int sum;
    bool running = true;

    cout << "Escribe numeros para que los sume" << endl;

    while (running) {
        cout << "Escribe dos numeros que sumados den par o troleame" << endl;
        int a, b, s;
        cin >> a >> b;
        s = a+b;
        sum += s;
        if (s%2 == 1){
            running = false;
        }
    }

    cout << "La suma total es: " << sum << endl;
}
