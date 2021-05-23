#ifndef UNTITLED_OPERATIONSEXPERT_H
#define UNTITLED_OPERATIONSEXPERT_H

#include "Player.hpp"
namespace pandemic {
    class OperationsExpert : public Player {
    public:
        OperationsExpert(Board& board, City city): Player(board, city){}
        void build();
        std::string role();
    };
}

#endif