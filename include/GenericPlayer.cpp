#include "GenericPlayer.h"



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
