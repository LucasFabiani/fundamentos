#include <iostream>
using namespace std;

/*
EJERCICIO 9

9) Genere el siguiente dibujo: (use ciclos repetitivos para hacerlo)
**********
*********
********
*******
******
*****
****
***
**
*

*/


int main(){
    int cant = 10;
    for(int i = 0; i < 10; i++){
        cant--;
        for(int j = 0; j < cant; j++){
            cout << "*";
        }
        cout << endl;
    }
}
