//
// Created by maksim.sidorov on 13.07.2021.
//

#include "Deck.h"

Deck::Deck() {
    m_Cards.reserve(52);
    Populate();
}

Deck::~Deck() {
    std::cout << "The Deck class destructor invoked" << '\n';
}

void Deck::Populate() {
    for (auto s = Card::suit::CLUBS; s <= Card::suit::SPADES; ++s) {
        for (auto r = Card::rank::ACE; r <= Card::rank::KING; ++r) {
            Add(std::make_shared<Card>(r, s));
        }
    }
}

void Deck::Shuffle() {

}

void Deck::Deal(Hand &aHand) {

}

void Deck::AdditionalCards(GenericPlayer &aGenericPlayer) {

}
