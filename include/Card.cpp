#include "Card.h"

Card::Card(Card::rank r, Card::suit s, bool pos) : m_Rank(r), m_Suit(s),
                                                   m_PositionUp(pos) {}

void Card::Flip() {
    m_PositionUp = !(m_PositionUp);
}

size_t Card::GetValue() const {
    unsigned int value = 0;
    if (m_PositionUp) {
        value = getRank().second;
        if (value > 10) {
            value = 10;
        }
    }

    return value;
}

std::ostream &operator<<(std::ostream &os, const Card& card) {
    if (card.m_PositionUp) {
        os << card.getRank().first << " " << card.getRank().second;
    }
    else {
        os << "XX";
    }

    return os;
}

std::pair<std::string, size_t> Card::getRank() const{
    static std::unordered_map<Card::rank, std::pair<std::string, size_t>> map{
            {Card::rank::ACE, {"ACE", 11}},
            {Card::rank::TWO, {"TWO", 2}},
            {Card::rank::THREE, {"THREE", 3}},
            {Card::rank::FOUR, {"FOUR", 4}},
            {Card::rank::FIVE, {"FIVE", 5}},
            {Card::rank::SIX, {"SIX", 6}}
    };

    return map[m_Rank];
}

