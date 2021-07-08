#ifndef PROJECTPORTFOLIO_CARD_H
#define PROJECTPORTFOLIO_CARD_H

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

class Card {
public:
    enum class suit {
        SPADES,
        HEARTS,
        DIAMONDS,
        CLUBS
    };
    enum class rank { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
        JACK, QUEEN, KING
    };
    explicit Card(rank r = rank::ACE, suit s = suit::SPADES, bool pos = true);
    void Flip();
    [[nodiscard]]int GetTotal() const;
    std::pair<size_t, std::string> rangCard(rank r);

    friend std::ostream& operator<<(std::ostream& os, const Card& card);
private:
    suit m_Suit;
    rank m_Rank;
    bool m_PositionUp;
};


#endif //PROJECTPORTFOLIO_CARD_H
