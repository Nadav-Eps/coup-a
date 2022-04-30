#include "Player.hpp"
#include "Game.hpp"
using namespace coup;


Player::~Player(){};

void Player::income(){
};
void Player::foreign_aid(){};
void Player::coup(Player &player){};
string Player::role(){
    return role_p;
};
int Player::coins() const{
    return s_coin;
};