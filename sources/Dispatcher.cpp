#include "Dispatcher.hpp"

using namespace std;
namespace pandemic {
    Player &Dispatcher::fly_direct(City dest_city) {
        if (curr_city == dest_city) {
            string message = "Hey! Its from the city to itself that impossible";
            throw std::invalid_argument(message);
        }
        if (board.is_there_research_station(curr_city)){
            curr_city = dest_city;
        }
        else{
            fly(dest_city, dest_city);
        }
        return *this;
    }
    string Dispatcher::role(){
        return "Dispatcher";
    }
}