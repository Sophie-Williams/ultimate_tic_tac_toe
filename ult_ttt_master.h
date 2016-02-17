

#ifndef __ULT_TTT_MASTER__
#define __ULT_TTT_MASTER__

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

// #include "ult_ttt_ai.h"
#include "ult_ttt_settings.h"
#include "ult_ttt_game.h"

class UltTTTMaster
{
public:
    UltTTTMaster();
    ~UltTTTMaster();
    void play();
private:
    std::vector<std::string> split_input(std::string& line, const char& delimeter);
    UltTTTGame __game;
    UltTTTSettings __settings;
};

#endif
