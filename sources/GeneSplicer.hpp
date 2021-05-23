#ifndef UNTITLED_GENESPLICER_H
#define UNTITLED_GENESPLICER_H
#include "Player.hpp"

namespace pandemic {
    class GeneSplicer : public Player {
    public:
        GeneSplicer(Board& board, City city): Player(board, city){}
        void discover_cure(Color color);
        std::string role();
    };
}
#endif