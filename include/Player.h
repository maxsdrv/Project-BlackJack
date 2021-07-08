#ifndef PROJECTPORTFOLIO_PLAYER_H
#define PROJECTPORTFOLIO_PLAYER_H

#include "GenericPlayer.h"

class Player: public GenericPlayer {
    explicit Player(string name = "");
    ~Player() override;

    bool isHitting() const override;
    void Win() const;
    void Lose() const;
    void Push() const;
};

Player::Player(string name) : GenericPlayer(std::move(name)) {}

bool Player::isHitting() const {
    std::cout << m_Name << ". do you want a hit? (Y/N): ";
    std::string response;
    std::getline(std::cin, response);
    for (const auto& s : response) {
    }
}

void Player::Win() const {

}

void Player::Lose() const {

}

void Player::Push() const {

}


Player::~Player() = default;


#endif //PROJECTPORTFOLIO_PLAYER_H
