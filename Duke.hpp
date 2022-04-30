#pragma once
#include "Game.hpp"
#include "Player.hpp"
namespace coup
{
    class Duke : public Player{
    public:

        Duke(Game &g,const string & nm):Player(g,nm){Player::role_p = "Duke";}
        ~Duke();
        void tax();
        void block(Player &player);

    };
}