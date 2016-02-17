

#ifndef __ULT_TTT_GAME__
#define __ULT_TTT_GAME__

#include <vector>

class UltTTTGame
{
public:
    UltTTTGame();
    ~UltTTTGame();
    void set_round(const int& n);
    void set_move(const int& n);
    void set_field(const std::vector<int>& f);
    void set_macro(const std::vector<int>& m);
    int get_round();
    int get_move();
    std::vector<std::vector<int>> get_field();
    std::vector<std::vector<int>> get_macro();
private:
    int __round;
    int __move;
    std::vector<std::vector<int>> __field;
    std::vector<std::vector<int>> __macro;
    const int __f_size = 9;
    const int __m_size = 3;
};

#endif
