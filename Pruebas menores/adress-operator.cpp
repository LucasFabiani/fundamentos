#include <iostream>
using namespace std;

int main(){
  int a, b;
  a = 30;
  int *to_a;
  to_a = &a;
  b = *to_a;

  cout << a << endl;
  cout << to_a << endl;
  cout << b << endl;
}
