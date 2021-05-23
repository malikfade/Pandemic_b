#include "Scientist.hpp"

using namespace std;
namespace pandemic {
    void Scientist::discover_cure(Color color) {
        if (board.is_there_research_station(curr_city)) {
            bool res= false;
            switch (color) {
                case Red:
                    if (board.red_cure) {
                        return;
                    }
                    board.red_cure = res = removeCards(lower_red, higher_red, this->number_of_cards);
                    break;
                    
                case Black:
                    if (board.black_cure) {
                        return;
                    }
                    board.black_cure = res = removeCards(lower_black, higher_black, this->number_of_cards);
                    break;

                case Blue:
                    if (board.blue_cure) {
                        return;
                    }
                    board.blue_cure = res = removeCards(lower_blue, higher_blue, this->number_of_cards);
                    break;

                case Yellow:
                    if (board.yellow_cure) {
                        return;
                    }
                    board.yellow_cure = res = removeCards(lower_yellow, higher_yellow, this->number_of_cards);
                    break;   
            }

            if (!res) {
                string message = "You must have at least 5 cards!";
                throw std::invalid_argument(message);
            }
        }
        
        else {
            string message = "You're current city " + board.get_city_name(curr_city) + " & it doesn't have a research station!";
            throw std::invalid_argument(message);
        }
    }
    
    void Scientist::remove_cards(){
        int temp= number_of_cards;
        Player::remove_cards();
        this->number_of_cards=temp;
    }

    string Scientist::role() {
        return "Scientist";
    }
}