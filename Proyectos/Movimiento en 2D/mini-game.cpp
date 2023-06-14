#include <iostream>
#include <windows.h>

using namespace std;

class Game {
  public:
  bool running = false;
  int mapSizeX = 40;
  int mapSizeY = 10;
  float speed = 2;
  float posx = 5;
  float posy = 5;
  float delta = 0.001;

  private:
  char _floor = '_';
  char _player = '#';
  string _map = "";

  public:
  void Input(){
    if (GetAsyncKeyState(37)) posx -= delta*speed;
    if (GetAsyncKeyState(39)) posx += delta*speed;
    if (GetAsyncKeyState(40)) posy -= delta*speed;
    if (GetAsyncKeyState(38)) posy += delta*speed;
  }

  public:
  void Render(){
    for (int y=0; y<mapSizeY; y++){
      for (int x=0; x<mapSizeX; x++){
        if (x==int(posx) && y==int(posy)) _map += _player;
          else _map += _floor;
      }
      _map += "\n";
    }
    string output = _map;
    cout << _map;
    COORD *mousecoord = new COORD{3, 2};
    HANDLE *consolebuffer = new HANDLE();

    SetConsoleCursorPosition(_map, ))
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
