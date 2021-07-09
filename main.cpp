
#include "include/Card.h"
#include "include/Hand.h"
#include "include/GenericPlayer.h"


int main() {
    Card d{Card::rank::ACE, Card::suit::CLUBS};
    std::cout << d;
   std::cout << '\n' << d.GetValue();

    return 0;
}
