#pragma once
#include <iostream>
#include <vector>
using std::string;
using std::vector;
#include "Game.hpp"

namespace coup
{
    class Player
    {
        protected:
        string name;
        Game game;
        int s_coin;
        string role_p;

        public:
         Player(Game &g,const string & nm): name(nm) , game(g), s_coin(0){}
         ~Player();
         void income();
         void foreign_aid();
         void coup(Player &p);
         int coins() const;
         string role();
    };}