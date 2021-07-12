#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H

#include "GenericPlayer.h"

class Player: public GenericPlayer {
    explicit Player(std::string name = "");
    ~Player() override;

    [[nodiscard]]bool isHitting() const override;
    void Win() const;
    void Lose() const;
    void Push() const;
};



#endif //BLACKJACK_PLAYER_H
