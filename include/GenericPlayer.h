#ifndef PROJECTPORTFOLIO_GENERICPLAYER_H
#define PROJECTPORTFOLIO_GENERICPLAYER_H

#include <iostream>
#include <utility>

#include "Hand.h"

class GenericPlayer: public Hand {
public:
    explicit GenericPlayer(std::string  name = "");
    ~GenericPlayer() override;
    virtual bool isHitting() const = 0;
    bool isBusted() const;
    void Bust() const;
    friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);
protected:
    std::string m_Name;
};

GenericPlayer::GenericPlayer(std::string name) : m_Name(std::move(name)) {}

bool GenericPlayer::isBusted() const {
    return (GetValue() > 21);
}

void GenericPlayer::Bust() const {
    std::cout << m_Name << " busts.\n";
}

std::ostream &operator<<(std::ostream &os, const GenericPlayer &aGenericPlayer) {
    os << aGenericPlayer.m_Name;

    return os;
}

GenericPlayer::~GenericPlayer() = default;


#endif //PROJECTPORTFOLIO_GENERICPLAYER_H
