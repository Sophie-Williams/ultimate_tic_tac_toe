

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>

#include "ult_ttt_master.h"

UltTTTMaster::UltTTTMaster() { };

UltTTTMaster::~UltTTTMaster() { };

void UltTTTMaster::play() {
    std::string input;
    while(std::getline(std::cin, input)) {

        char delim = ' ';
        std::vector<std::string> command_options = split_input(input, delim);

        if (command_options[0] == "settings") {
            if (command_options[1] == "timebank") {
                __settings.set_time_bank(std::stoi(command_options[2]));
            } else if (command_options[1] == "time_per_move") {
                __settings.set_time_per_move(std::stoi(command_options[2]));
            } else if (command_options[1] == "player_names") {
                std::vector<std::string> names(command_options.begin() + 2, command_options.end());
                __settings.set_player_names(names);
            } else if (command_options[1] == "your_bot") {
                __settings.set_bot_name(command_options[2]);
            } else if (command_options[1] == "your_botid") {
                __settings.set_bot_id(std::stoi(command_options[2]));
            }

        } else if (command_options[0] == "update") {
            if (command_options[2] == "round") {
                __game.set_round(std::stoi(command_options[3]));
            } else if (command_options[2] == "move") {
                __game.set_move(std::stoi(command_options[3]));
            } else if (command_options[2] == "field") {
                std::vector<std::string> f = split_input(command_options[3], ',');
                std::vector<int> fint;
                for (const std::string& s: f) {
                    fint.push_back(std::stoi(s));
                }
                __game.set_field(fint);
            } else if (command_options[2] == "macroboard") {
                std::vector<std::string> f = split_input(command_options[3], ',');
                std::vector<int> fint;
                for (const std::string& s: f) {
                    fint.push_back(std::stoi(s));
                }
                __game.set_field(fint);
            }

        } else if (command_options[0] == "action") {
            // give game board and macro board to AI engine, pick moves, output as follows:
            // std::cout << "place_move " << x << y << std::endl;
            std::cout << "place_move " << 1 << 1 << std::endl;
        }
    }
}


std::vector<std::string> UltTTTMaster::split_input(std::string& input, const char& delim) {
    std::vector<std::string> output;
    std::stringstream sstream(input);
    std::string val;

    while (std::getline(sstream, val, delim)) {
        output.push_back(val);
    }
    return output;
}
