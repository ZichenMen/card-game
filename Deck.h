#ifndef CARDGAME_DECK_H
#define CARDGAME_DECK_H

class Card;

class Deck {
    static const int REQUIRED_CARD_COUNT = 40;

    Card *cards;
    int currentSize;

public:
    Deck();
    ~Deck();

    void addCard(Card card);
    void shuffle();
    Card removeTopCard();
};


#endif //CARDGAME_DECK_H
