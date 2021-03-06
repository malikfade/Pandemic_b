#include "Virologist.hpp"

using namespace std;
namespace pandemic {
    Player &Virologist::treat(City city) {
        if (cards.at(city) || curr_city == city) {
            Color c = board.get_city_color(city);
            if (board.get_city_level(city) == 0) {
                string message ="level of disease is 0!";
                throw std::invalid_argument(message);
            }

            switch (c) {
                case Red:
                    if (!board.red_cure) {
                        board.reduce_city_level_by_one(city);
                    } else {
                        board.reduce_city_level_by_all(city);
                    }
                    break;

                case Black:
                    if (!board.black_cure) {
                        board.reduce_city_level_by_one(city);
                    } else {
                        board.reduce_city_level_by_all(city);
                    }
                    break; 

                case Blue:
                    if (!board.blue_cure) {
                        board.reduce_city_level_by_one(city);
                    } else {
                        board.reduce_city_level_by_all(city);
                    }
                    break;

                case Yellow:
                    if (!board.yellow_cure) {
                        board.reduce_city_level_by_one(city);
                    } else {
                        board.reduce_city_level_by_all(city);
                    }
                    break;   
            }
        } 
        else {
            string message = "You don't have " + board.get_city_name(city) + " card!";
            throw std::invalid_argument(message);
        }
        return *this;
    }

    string Virologist::role() {
        return "Virologist";
    }
}