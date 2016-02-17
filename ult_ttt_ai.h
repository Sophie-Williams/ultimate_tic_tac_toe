

#ifndef __ULT_TTT_AI__
#define __ULT_TTT_AI__

#include <vector>

#include "ult_ttt_game.h"

class UltTTTAI : public UltTTTGame
{
public:
    UltTTTAI(const std::vector<int>& field, const std::vector<int>& macro);
    ~UltTTTAI();
private:
    std::vector<std::vector<int>> __field;
    std::vector<std::vector<int>> __macro;
    const int __f_size = 9;
    const int __m_size = 3;
};

#endif
