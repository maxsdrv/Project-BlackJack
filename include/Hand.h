#ifndef BLACKJACK_HAND_H
#define BLACKJACK_HAND_H

#include "Card.h"

class Hand {
public:
    Hand();
    virtual ~Hand();
    void Add(Card* pCard);
    [[nodiscard]]int GetTotal() const;
protected:
    std::vector<std::shared_ptr<Card>> m_Cards;
private:
};


#endif //BLACKJACK_HAND_H
