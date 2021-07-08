#ifndef PROJECTPORTFOLIO_PLAYER_H
#define PROJECTPORTFOLIO_PLAYER_H

#include "GenericPlayer.h"

class Player: public GenericPlayer {
    explicit Player(std::string name = "");
    ~Player() override;

    bool isHitting() const override;
    void Win() const;
    void Lose() const;
    void Push() const;
};



#endif //PROJECTPORTFOLIO_PLAYER_H
