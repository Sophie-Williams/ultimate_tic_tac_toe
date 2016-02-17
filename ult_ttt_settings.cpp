
#include <vector>
#include <string>

#include "ult_ttt_settings.h"

UltTTTSettings::UltTTTSettings() { }

UltTTTSettings::~UltTTTSettings() { }

void UltTTTSettings::set_time_bank(const int& n) { __time_bank = n; }

void UltTTTSettings::set_time_per_move(const int& n) { __time_per_move = n; }

void UltTTTSettings::set_player_names(const std::vector<std::string>& names) { __player_names = names; }

void UltTTTSettings::set_bot_name(const std::string& name){ __bot_name = name; }

void UltTTTSettings::set_bot_id(const int& n) { __bot_id = n; }

int UltTTTSettings::get_time_bank() { return __time_bank; }

int UltTTTSettings::get_time_per_move() { return __time_per_move; }

std::vector<std::string> UltTTTSettings::get_player_names() { return __player_names; }

std::string UltTTTSettings::get_bot_name() { return __bot_name; }

int UltTTTSettings::get_bot_id() { return __bot_id; }
