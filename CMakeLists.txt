cmake_minimum_required(VERSION 3.23)
project(cardGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(cardGame Card.cpp Deck.cpp Hand.cpp main.cpp Board.cpp Board.h Match.cpp Match.h)
