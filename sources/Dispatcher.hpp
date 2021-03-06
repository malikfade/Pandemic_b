#ifndef UNTITLED_DISPATCHER_H
#define UNTITLED_DISPATCHER_H

#include "Player.hpp"
namespace pandemic {
    class Dispatcher : public Player {
    public:
        Dispatcher(Board& board, City city): Player(board, city){}
        Player &fly_direct(City dest_city);
        std::string role();
    };
}
#endif