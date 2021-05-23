#ifndef UNTITLED_SCIENTIST_H
#define UNTITLED_SCIENTIST_H
#include <iostream>
#include "Player.hpp"
namespace pandemic {
    class Scientist : public Player {
        int number_of_cards;
    public:
        Scientist(Board& board, City city, int n): Player(board, city){
            number_of_cards=n;
        }
        void remove_cards();
        void discover_cure(Color color);
        std::string role();
    };
}
#endif