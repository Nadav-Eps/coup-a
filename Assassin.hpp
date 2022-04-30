#pragma once
#include "Game.hpp"
#include "Player.hpp"
namespace coup
{
    class Assassin : public Player{
    public:

        Assassin(Game &g,const string & nm):Player(g,nm){Player::role_p = "Assassin";}
        ~Assassin();
        void over_thrown(Player &player);

    };
}