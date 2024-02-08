#include <algorithm>
#include "Card.h"

Card::Card()
: name(PLACEHOLDER_NAME) {
}

Card::Card(std::string &name, int attack, int health)
: name(name)
, attack(attack)
, health(health) {
}

void Card::takeDamage(int damage) {
    health = std::max(0, health - damage);
}

