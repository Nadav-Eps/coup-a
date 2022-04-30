#include <iostream>
#include <vector>
#pragma once
using std::string;
using std::vector;

namespace coup
{
    class Game
    {
    private:
        int turn_p=0;
        vector<string> playersim;
        int winner_p=0;

     public:
        Game();
        ~Game();
        static int turn();
        vector <string> players();
        static int winner();
        

    };
    }