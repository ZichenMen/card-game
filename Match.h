#ifndef CARDGAME_MATCH_H
#define CARDGAME_MATCH_H

#include "Board.h"
#include "Deck.h"
#include "Hand.h"

class Match {
    static const int STARTING_HAND_SIZE = 4;

    Board board;
    Deck decks[2];
    Hand hands[2];
    bool isPlayer1Turn;

    void drawCard(Deck&, Hand&);
    void drawStartingHand(Deck&, Hand&);
    int currentPlayerIndex() const;

public:
    Match(Deck player1Deck, Deck player2Deck);
    void printHand(int);
    void endTurn();
    void playCard(int);
    void attack(int, int);
};


#endif //CARDGAME_MATCH_H
