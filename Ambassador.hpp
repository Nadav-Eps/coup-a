#pragma once
#include "Game.hpp"
#include "Player.hpp"
namespace coup
{
    class Ambassador : public Player{
    public:

        Ambassador(Game &g,const string & nm):Player(g,nm){Player::role_p = "Ambasador";}
        ~Ambassador();
        void block(Player &player);
        void transfer(Player &player , Player &player2);


    };
}