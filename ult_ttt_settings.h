

#ifndef __ULT_TTT_SETTINGS__
#define __ULT_TTT_SETTINGS__

#include <vector>
#include <string>

class UltTTTSettings
{
public:
    UltTTTSettings();
    ~UltTTTSettings();
    // setters
    void set_time_bank(const int& n);
    void set_time_per_move(const int& n);
    void set_player_names(const std::vector<std::string>& names);
    void set_bot_name(const std::string& name);
    void set_bot_id(const int& n);
    // getters
    int get_time_bank();
    int get_time_per_move();
    std::vector<std::string> get_player_names();
    std::string get_bot_name();
    int get_bot_id();
private:
    int __time_bank;
    int __time_per_move;
    std::vector<std::string> __player_names;
    std::string __bot_name;
    int __bot_id;
};

#endif
