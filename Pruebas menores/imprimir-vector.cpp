#include <iostream>
#include <vector>

using namespace std;

void print(vector <auto> &vec){
    cout << "[";
    for(auto i: vec){
        cout << i;
        if (i != vec.back()){
            cout << ", ";
        }
    }
    cout << "]";
}

int main(){
    vector <int> edades = {3, 12, 5, 14};
    print(edades);

    return 0;
}
