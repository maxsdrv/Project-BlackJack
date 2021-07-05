#include "Card.h"

Card::Card(Card::rank r, Card::suit s, bool pos) : m_Rank(r), m_Suit(s),
                                                   m_PositionUp(pos) {}

void Card::Flip() {
    m_PositionUp = !(m_PositionUp);
}

int Card::GetValue() const {
    int value = 0;
    if (m_PositionUp) {
        value = static_cast<int>(m_Rank);
        if (value > 10) {
            value = 10;
        }
    }

    return value;
}

std::ostream &operator<<(std::ostream &os, const Card& card) {
    const std::string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    const std::string SUITS[] = {"c", "d", "h", "s"};
    if (card.m_PositionUp) {
        os << RANKS[static_cast<int>(card.m_Rank)] << " " <<
              SUITS[static_cast<int>(card.m_Suit)];
    }
    else {
        os << "XX";
    }

    return os;
}
