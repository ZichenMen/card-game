#include <algorithm>
#include <random>
#include "Deck.h"
#include "Card.h"

Deck::Deck()
: cards(new Card[REQUIRED_CARD_COUNT])
, currentSize(0) {
}

Deck::~Deck() {
    delete []cards;
}

void Deck::addCard(Card card) {
    if(currentSize < REQUIRED_CARD_COUNT) {
        cards[currentSize] = card;
        currentSize++;
    }
}

void Deck::shuffle() {
    std::shuffle(&cards[0], &cards[currentSize - 1], std::default_random_engine());
}

Card Deck::removeTopCard() {
    return cards[currentSize--];
}
