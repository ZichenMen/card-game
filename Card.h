#ifndef CARDGAME_CARD_H
#define CARDGAME_CARD_H

#include <string>

class Card {
    constexpr static const char * const PLACEHOLDER_NAME = "blank";

    std::string name;
    int attack;
    int health;

public:
    Card();
    Card(std::string&, int, int);

    std::string getName() const { return name; }
    int getAttack() const { return attack; }
    int getHealth() const { return health; }
    bool isPlaceholder() const { return name == PLACEHOLDER_NAME; };

    void takeDamage(int);
};


#endif //CARDGAME_CARD_H
