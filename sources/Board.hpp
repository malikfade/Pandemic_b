#ifndef UNTITLED_BOARD_H
#define UNTITLED_BOARD_H

#include "City.hpp"
#include "Holder.hpp"
#include <unordered_map>
#include <vector>

namespace pandemic{
    class Board {
    private:
        std::unordered_map<City,Holder> cities;
        int stations;
        void load_map();
        void load_red();
        void load_black();
        void load_blue();
        void load_yellow();
        
    public:
        bool red_cure;
        bool black_cure;
        bool blue_cure;
        bool yellow_cure;
        Board(): stations(0), blue_cure(false), yellow_cure(false), black_cure(false), red_cure(false) {load_map();}
        std::string get_city_name (City city);
        Color get_city_color (City city);
        int get_city_level (City city);
        size_t get_city_num (City city);
        void reduce_city_level_by_one(City city);
        void reduce_city_level_by_all(City city);
        bool is_there_research_station(City city);
        void build(City city);
        bool are_neighbors(City first, City second);
        int& operator[] (City city);
        int operator[] (City city) const;
        friend std::ostream &operator<<(std::ostream &os, const Board &board);
        bool is_clean();
        void remove_cures();
    };
}

#endif