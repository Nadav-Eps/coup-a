#pragma once
#include "Game.hpp"
#include "Player.hpp"
namespace coup
{
    class Contessa : public Player{
    public:

        Contessa(Game &g,const string & nm):Player(g,nm){Player::role_p = "Contessa";}
        ~Contessa();
        void block(Player &player);

    };
}