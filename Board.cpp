#include "Board.h"
#include "Card.h"

Board::Board()
: player1Cards(new Card[MAX_CARDS_PER_PLAYER])
, player2Cards(new Card[MAX_CARDS_PER_PLAYER])
, player1CardCount(0)
, player2CardCount(0) {
}

Board::~Board() {
    delete []player1Cards;
    delete []player2Cards;
}

void Board::addCard(Card card, bool isPlayer1) {
    if(isPlayer1) {
        player1Cards[player1CardCount++] = card;
    } else {
        player2Cards[player2CardCount++] = card;
    }
}

void Board::attack(int attackerIndex, int defenderIndex, bool isPlayer1) {
    Card *attackerCards;
    Card *defenderCards;
    if(isPlayer1) {
        attackerCards = player1Cards;
        defenderCards = player2Cards;
    } else {
        attackerCards = player2Cards;
        defenderCards = player1Cards;
    }
    attackerCards[attackerIndex].takeDamage(defenderCards[defenderIndex].getAttack());
    defenderCards[defenderIndex].takeDamage(attackerCards[attackerIndex].getAttack());
}


