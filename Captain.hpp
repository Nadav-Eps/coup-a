#pragma once
#include "Game.hpp"
#include "Player.hpp"
namespace coup
{
    class Captain : public Player{
    public:

        Captain(Game &g,const string & nm):Player(g,nm){Player::role_p = "Captain";}
        ~Captain();
        void block(Player &player);
        void steal(Player &player);

    };
}