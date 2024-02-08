#ifndef CARDGAME_HAND_H
#define CARDGAME_HAND_H

class Card;

class Hand {
    static const int MAX_HAND_SIZE = 7;

    Card *cards;
    int currentSize;

public:
    Hand();
    ~Hand();

    bool isFull() const { return currentSize == MAX_HAND_SIZE; };
    int getCurrentSize() const { return currentSize; };
    Card getCard(int) const;
    Card removeCard(int);
    void addCard(Card);
};


#endif //CARDGAME_HAND_H
