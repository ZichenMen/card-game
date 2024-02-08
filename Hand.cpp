#include "Hand.h"
#include "Card.h"

Hand::Hand()
: cards(new Card[MAX_HAND_SIZE])
, currentSize(0) {
}

Hand::~Hand() {
    delete []cards;
}

Card Hand::getCard(int index) const {
    return cards[index];
}

Card Hand::removeCard(int index) {
    if(index < 0 || index >= currentSize) {
        return Card();
    }
    Card selectedCard = cards[index];
    for(int i = index; i < currentSize - 1; i++) {
        cards[i] = cards[i + 1];
    }
    currentSize--;
    return selectedCard;
}

void Hand::addCard(Card card) {
    cards[currentSize++] = card;
}
