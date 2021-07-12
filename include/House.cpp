#include "House.h"

House::House(const std::string &name) : GenericPlayer(name) {
}

bool House::isHitting() const {
    return (GetTotal() <= 16);
}

House::~House() {
    std::cout << "The Hand class destructor invoke" << std::endl;
}

void House::FlipFirstCard() {
    if (!(m_Cards.empty())) {
        m_Cards[0]->Flip();
    }
    else {
        std::cout << "No card to flip!\n";
    }
}
