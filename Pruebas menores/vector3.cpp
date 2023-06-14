#include <iostream>
using namespace std;

template <class T>
class vec3{
public:
  vec3(const T _x, const T _y, const T _z){
    x = _x;
    y = _y;
    z = _z;
  };

  ~vec3(){};
  vec3<T>& operator+=(const vec3 v){
    x += v.x;
    y += v.y;
    z += v.z;
    return *this;
  }
  float x, y, z;

  void print(){
    cout << "(" << x << ", " << y << ", " << z << ")";
  }
};

int main(){
  vec3<int> vec1(1, 2, 3);
  vec3<int> vec2(4, 5, 6);

  vec1 += vec2;

  vec1.print();

  return 0;
}


