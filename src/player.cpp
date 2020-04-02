#include <iostream>
#include "player.h"

Player::Player()
{
    std::string name;
    std::cout << "Enter Your Name Please: ";
    std::cin >> name;
    player_name = name;
}

bool Player::PlayAgain()
{
    while(true)
    {
        std::string play_again;
        std::cout << "Would you like to play agin? [y/n]: " << std::endl;
        std::cin >> play_again;
    
        if (play_again == "n" || play_again == "no")
        {
            return false;
        }
        else if (play_again == "y" || play_again == "yes" || play_again == "Y" || play_again == "YES")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}