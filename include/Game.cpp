#include "Game.h"
#include <ctime>

Game::Game(const std::vector<std::string> &names) {
    std::vector<std::string>::const_iterator pName;
    for (pName = names.begin(); pName != names.end(); ++pName) {
        m_Players.emplace_back(Player(*pName));
    }
    srand(static_cast<unsigned int>(time(nullptr)));
    m_Deck.Populate();
    m_Deck.Shuffle();
}

Game::~Game() {
    std::cout << "The Game class destructor invoked" << '\n';
}

void Game::Play() {

}
