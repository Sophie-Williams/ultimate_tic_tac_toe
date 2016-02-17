

#include <vector>

#include "ult_ttt_game.h"

UltTTTGame::UltTTTGame() { };

UltTTTGame::~UltTTTGame() { };

void UltTTTGame::set_round(const int& n) { __round = n; }

void UltTTTGame::set_move(const int& n) { __move = n; }

void UltTTTGame::set_field(const std::vector<int>& f) {
    __field.resize(__f_size);
    for (int i = 0; i < __f_size; i++) {
        for (int j = 0; j < __f_size; j++) {
            __field[i].push_back(f[(i * __f_size) + j]);
        }
    }
}

void UltTTTGame::set_macro(const std::vector<int>& m) {
    __macro.resize(__m_size);
    for (int i = 0; i < __m_size; i++) {
        for (int j = 0; j < __m_size; j++) {
            __macro[i].push_back(m[(i * __m_size) + j]);
        }
    }
}

int UltTTTGame::get_round() { return __round; }

int UltTTTGame::get_move() { return __move; }

std::vector<std::vector<int>>* UltTTTGame::get_field() { return &__field; }

std::vector<std::vector<int>>* UltTTTGame::get_macro() { return &__macro; }
