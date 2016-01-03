#ifndef game_screen
#define game_screen

#include <SFML/Graphics.hpp>

class GameScreen{
  public:
    GameScreen();
    ~GameScreen();

    void Load();
    void Unload();
    void Update();
    void Draw();
};

#endif
