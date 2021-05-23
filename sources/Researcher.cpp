#include "Researcher.hpp"

using namespace std;
namespace pandemic {
    void Researcher::discover_cure(Color color) {
        bool res= false;
        switch (color) {
            case Red:
                if (board.red_cure) {
                    return;
                }
                board.red_cure = res = removeCards(lower_red, higher_red, default_num_of_cards);
                break;

            case Black:
                if (board.black_cure) {
                    return;
                }
                board.black_cure = res = removeCards(lower_black, higher_black, default_num_of_cards);
                break;
            
            case Blue:
                if (board.blue_cure) {
                    return;
                }
                board.blue_cure = res = removeCards(lower_blue, higher_blue, default_num_of_cards);
                break;
            
            case Yellow:
                if (board.yellow_cure) {
                    return;
                }
                board.yellow_cure = res = removeCards(lower_yellow, higher_yellow, default_num_of_cards);
                break;
            
            
        }
        if (!res) {
            string message = "You must have at least 5 card!";
            throw std::invalid_argument(message);
        }
    }

    string Researcher::role() {
        return "Researcher";
    }
}