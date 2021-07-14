#include "Deck.h"
#include <algorithm>
#include <random>


Deck::Deck() {
    m_Cards.reserve(52);
    Populate();
}

Deck::~Deck() {
    std::cout << "The Deck class destructor invoked" << '\n';
}

void Deck::Populate() {
    // changed all here ...
    for (int s = static_cast<int>(Card::suit::CLUBS); s <= static_cast<int>(Card::suit::SPADES); s++) {
        for (int r = static_cast<int>(Card::rank::ACE); r <= static_cast<int>(Card::rank::KING); r++) {
            auto ptr_card = std::make_shared<Card>(static_cast<Card::rank>(r), static_cast<Card::suit>(s));
            Add(ptr_card.get());
        }
    }
}

void Deck::Shuffle() {
    std::random_device rd; // changed here ....
    std::mt19937 g(rd()); // ...
    std::shuffle(m_Cards.begin(), m_Cards.end(), g);
}

void Deck::Deal(Hand &aHand) {
    if (!m_Cards.empty()) {
        aHand.Add(m_Cards.back().get());// changed here ....
        m_Cards.pop_back();
    }
    else {
        std::cout << "Out of cards. Unable to deal. ";
    }
}

void Deck::AdditionalCards(GenericPlayer &aGenericPlayer) {
    std::cout << std::endl;

    while (!(aGenericPlayer.isBusted()) && aGenericPlayer.isHitting()) {
        Deal(aGenericPlayer);
        std::cout << aGenericPlayer << std::endl;
        if (aGenericPlayer.isBusted()) {
            aGenericPlayer.Bust();
        }
    }
}
