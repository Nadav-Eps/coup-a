#include "doctest.h"
#include "Game.hpp"
#include "Player.hpp"
#include "Ambassador.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"
#include <vector>
using std::string;
using std::vector;
using std::endl;
using std::cout;
using namespace coup;

TEST_CASE(" "){
Game game{};
Ambassador amb{game, "Nadav"};
Assassin ass{game, "Murderer"};
Captain cap{game, "Boss"};
Contessa con{game, "Block"};
Duke duk{game, "Lion"};

CHECK(amb.role()== "Ambassador");
CHECK(amb.role()!= "Assassin");
CHECK(cap.role()== "Captain");
CHECK(cap.role()!= "Assassin");
CHECK(ass.role()== "Assassin");
CHECK(ass.role()!= "Assassin123");
CHECK(con.role()== "Contessa");
CHECK(con.role()!= "Assassin");
CHECK(duk.role()== "Duke");
CHECK(duk.role()!= "Assassin");

CHECK_NOTHROW(game.winner());
CHECK_NOTHROW(game.players());
CHECK_NOTHROW(game.turn());


CHECK_NOTHROW(duk.block(con));
CHECK_NOTHROW(con.block(con));
CHECK_NOTHROW(ass.over_thrown(con));
CHECK_NOTHROW(cap.block(con));
CHECK_NOTHROW(cap.steal(con));
CHECK_NOTHROW(amb.block(con));
CHECK_NOTHROW(amb.transfer(con,ass));
CHECK_NOTHROW(duk.tax());

CHECK_NOTHROW(game.~Game());



}