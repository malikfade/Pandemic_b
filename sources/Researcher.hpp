#ifndef UNTITLED_RESEARCHER_H
#define UNTITLED_RESEARCHER_H
#include "Player.hpp"

namespace pandemic {

    class Researcher : public Player {
    public:
        Researcher(Board& board, City city): Player(board, city){}
        void discover_cure(Color color);
        std::string role();
    };
}
#endif