#include "Hand.h"

Hand::Hand() {
    m_Cards.reserve(7);
}

void Hand::Add(Card *pCard) {
    m_Cards.push_back(pCard);
}

Hand::~Hand() {
    Clear();
}

void Hand::Clear() {
    auto it = m_Cards.begin();
    for (it = m_Cards.begin(); it != m_Cards.end(); ++it) {
        delete *it;
        *it = nullptr;
    }
    m_Cards.clear();
}

int Hand::GetTotal() const {
    if (m_Cards.empty()) {
        return 0;
    }
    if (m_Cards[0]->GetTotal() == 0) {
        return 0;
    }
    int total = 0;
    std::vector<Card*>::const_iterator iterator;
    for (iterator = m_Cards.begin(); iterator != m_Cards.end(); ++iterator) {
        total += (*iterator)->GetTotal();
    }
    bool containsAce = false;
    for (iterator = m_Cards.begin(); iterator != m_Cards.end(); ++iterator) {
        if ((*iterator)->GetTotal() == static_cast<int>(Card::rank::ACE)) {
            containsAce = true;
        }
    }
    if (containsAce && total <= 11) {
        total += 10;
    }
    return total;
}

