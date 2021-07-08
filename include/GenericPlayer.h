#ifndef PROJECTPORTFOLIO_GENERICPLAYER_H
#define PROJECTPORTFOLIO_GENERICPLAYER_H

#include <iostream>
#include <utility>

#include "Hand.h"

class GenericPlayer: public Hand {
public:
    explicit GenericPlayer(std::string  name = "");
    ~GenericPlayer() override;
    virtual bool isHitting() const = 0;
    bool isBusted() const;
    void Bust() const;
    friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);
protected:
    std::string m_Name;
};




#endif //PROJECTPORTFOLIO_GENERICPLAYER_H
