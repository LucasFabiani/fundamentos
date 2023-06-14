#include <iostream>
#include <fstream>

using namespace std;
ofstream log;

void program(){
  // start program

  log << "Hola";

  // end program
}

int main(){
  log.open("logs.tmp", ostream::out);
  program();
  log.close();
  return 0;
}
