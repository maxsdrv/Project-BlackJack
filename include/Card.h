#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <memory>

class Card {
public:
    enum class suit {
        CLUBS,
        DIAMONDS,
        HEARTS,
        SPADES
    };
    enum class rank { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
        JACK, QUEEN, KING
    };
    explicit Card(rank r = rank::ACE, suit s = suit::SPADES, bool pos = true);
    void Flip();
    [[nodiscard]]int GetValue() const;
    [[nodiscard]]std::pair<std::string, int> getRank() const;
    friend std::ostream& operator<<(std::ostream& os, const Card& card);
private:
    suit m_Suit;
    rank m_Rank;
    bool m_PositionUp;
};


#endif //BLACKJACK_CARD_H
