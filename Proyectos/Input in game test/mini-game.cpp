#include <iostream>
#include <windows.h>

using namespace std;

class Game {
  public:
  bool running = false;
  int mapsize = 20;
  float speed = 1.2;
  float posx = 3;
  float delta = 0.001;

  private:
  char _floor = '_';
  char _player = '#';
  string _map = "";

  public:
  void Input(){
    if (GetAsyncKeyState(74)) posx -= delta*speed;
    if (GetAsyncKeyState(76)) posx += delta*speed;
  }

  public:
  void Render(){
    for (int x=0; x<mapsize; x++){
      if (x==int(posx)) _map += _player;
      else _map += _floor;
    }
    string output = "\r" + _map + " posx: " + to_string(int(posx * 100.0)/100.0);
    cout << output;
    cout.flush();
    _map = "";
  }
};


int main(){
  Game *game = new Game;
  while(!game->running){
    game->Input();
    game->Render();
  }
}
