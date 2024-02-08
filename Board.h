#ifndef CARDGAME_BOARD_H
#define CARDGAME_BOARD_H

class Card;

class Board {
    const static int MAX_CARDS_PER_PLAYER = 5;

    Card *player1Cards;
    Card *player2Cards;
    int player1CardCount;
    int player2CardCount;

public:
    Board();
    ~Board();

    void addCard(Card, bool);
    void attack(int, int, bool);
};


#endif //CARDGAME_BOARD_H
