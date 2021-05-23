#ifndef UNTITLED_FIELDDOCTOR_H
#define UNTITLED_FIELDDOCTOR_H

#include "Player.hpp"
namespace pandemic {
    class FieldDoctor : public Player {
    public:
        FieldDoctor(Board& board, City city): Player(board, city){}
        Player & treat(City city);
        std::string role();
    };
}
#endif