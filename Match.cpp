#include <iostream>
#include "Match.h"
#include "Card.h"

Match::Match(Deck player1Deck, Deck player2Deck) {
    decks[0] = player1Deck;
    decks[1] = player2Deck;
    drawStartingHand(decks[0], hands[0]);
    drawStartingHand(decks[1], hands[1]);
    isPlayer1Turn = true;
}

void Match::printHand(int player) {
    for(int i = 0; i < hands[player].getCurrentSize(); i++) {
        Card card = hands[player].getCard(i);
        std::cout
            << card.getName() << " "
            << card.getAttack() << "/"
            << card.getHealth() << std::endl;
    }
}

void Match::drawCard(Deck &deck, Hand &hand) {
    hand.addCard(deck.removeTopCard());
}

void Match::drawStartingHand(Deck &deck, Hand &hand) {
    for(int i = 0; i < STARTING_HAND_SIZE; i++) {
        drawCard(deck, hand);
    }
}

int Match::currentPlayerIndex() const {
    return isPlayer1Turn ? 0 : 1;
}

void Match::endTurn() {
    isPlayer1Turn = !isPlayer1Turn;
    int index = currentPlayerIndex();
    drawCard(decks[index], hands[index]);
}

void Match::playCard(int handIndex) {
    int index = currentPlayerIndex();
    board.addCard(hands[index].removeCard(handIndex), isPlayer1Turn);
}

void Match::attack(int attackerIndex, int defenderIndex) {
    board.attack(attackerIndex, defenderIndex, isPlayer1Turn);
}

