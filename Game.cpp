#include "Game.hpp"

namespace coup{

Game::Game(){};
Game::~Game(){};

vector <string> Game::players()  {
    return playersim;
};
 int Game::turn(){
    return 0;
};
 int Game::winner(){
    return 0;
};
}