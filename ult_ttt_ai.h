

#ifndef __ULT_TTT_AI__
#define __ULT_TTT_AI__

#include <vector>
#include <utility>

#include "ult_ttt_game.h"

class UltTTTAI : public UltTTTGame
{
public:
    UltTTTAI();
    ~UltTTTAI();
    std::pair<int, int> make_move();
private:
};

#endif
