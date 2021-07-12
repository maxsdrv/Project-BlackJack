
#include "include/Card.h"
#include "include/Hand.h"
#include "include/GenericPlayer.h"


//Note: Use smart pointers either unique_ptr or shared_ptr into class Hand!!!!

int main() {
    Card d{Card::rank::ACE, Card::suit::CLUBS};
    std::cout << d;
    std::cout << '\n' << d.GetValue();



    return 0;
}
