#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player 
{
public:
    Player();
    std::string GetName() 
    {
        return player_name; 
    }
    bool PlayAgain();
private:
    void ConvertToLowerCase(std::string &play_again);

private:
	std::string player_name;
};

#endif