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
        *it = 0;
    }
    m_Cards.clear();
}

int Hand::GetValue() const {
    if (m_Cards.empty()) {
        return 0;
    }
    if (m_Cards[0]->GetValue() == 0) {
        return 0;
    }
}
