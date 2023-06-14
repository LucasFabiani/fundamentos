#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string fileName = "example.txt";
  ifstream file;
  file.open(fileName.c_str());

  while(!file.eof()){
    string line;
    getline(file, line);
    cout << line << endl;
  }
}
