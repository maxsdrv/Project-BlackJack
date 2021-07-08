#include "Player.h"


Player::Player(std::string name) : GenericPlayer(std::move(name)) {}

bool Player::isHitting() const {
    std::cout << m_Name << ". do you want a hit? (Y/N): ";
    std::string response;
    std::getline(std::cin, response);
    return (response == "y" || response == "Y");
}

void Player::Win() const {

}

void Player::Lose() const {

}

void Player::Push() const {

}


Player::~Player() = default;
