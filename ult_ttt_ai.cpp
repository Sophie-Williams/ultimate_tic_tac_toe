

#include <vector>

#include "ult_ttt_ai.h"

UltTTTAI::UltTTTAI(const std::vector<int>& field, const std::vector<int>& macro) {
    __field.resize(__f_size);
    for (int i = 0; i < __f_size; i++) {
        for (int j = 0; j < __f_size; j++) {
            __field[i].push_back(field[(i * __f_size) + j]);
        }
    }

    __macro.resize(__m_size);
    for (int i = 0; i < __m_size; i++) {
        for (int j = 0; j < __m_size; j++) {
            __macro[i].push_back(macro[(i * __m_size) + j]);
        }
    }
}

UltTTTAI::~UltTTTAI() { };
