#include "Game.h"

using namespace std;

int main(int argc, char** args){

    Game::GetInstance()->Init();

    while(Game::GetInstance()->IsRunning()){
        Game::GetInstance()->Events();
        Game::GetInstance()->Update();
        Game::GetInstance()->Render();
    }

    Game::GetInstance()->Clean();
    return 0;
}
