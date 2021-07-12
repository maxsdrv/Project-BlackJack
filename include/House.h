#ifndef BLACKJACK_HOUSE_H
#define BLACKJACK_HOUSE_H

#include "GenericPlayer.h"

class House: public GenericPlayer {
public:
    explicit House(const std::string& name = "House");
    virtual ~House();
    [[nodiscard]] bool isHitting()  const override;
    void FlipFirstCard();
private:
};


#endif //BLACKJACK_HOUSE_H
