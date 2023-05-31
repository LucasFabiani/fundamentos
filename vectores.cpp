#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> edades = {1, 2, 3, 4};

    edades.push_back(5);

    for(int i: edades){
        cout << i << " ";
    }
}
