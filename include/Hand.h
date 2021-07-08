#ifndef PROJECTPORTFOLIO_HAND_H
#define PROJECTPORTFOLIO_HAND_H

#include "Card.h"

class Hand {
public:
    Hand();
    virtual ~Hand();
    void Add(Card* pCard);
    void Clear();
    [[nodiscard]]int GetTotal() const;
protected:
    std::vector<Card*> m_Cards;
private:
};


#endif //PROJECTPORTFOLIO_HAND_H
