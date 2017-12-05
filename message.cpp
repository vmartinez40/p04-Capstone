#include "message.h"

bool message::choiceIsValid(int choice)
{
        if(choice != 1 && choice != 2)
        {
                validChoice = false;
        }
        else 
        {
                validChoice = true;
        }
        return validChoice;
}

int message::greeting()
{
        std::cout<<"Welcome to my Battleship Game!"<<std::endl;
        std::cout<<"Choose one of the options below to get started!"<<std::endl;
        std::cout<<"1) Play Battleship!"<<std::endl;
        std::cout<<"2) Exit program"<<std::endl;
        std::cin>>choice;
        choiceIsValid(choice);
        while(validChoice == false)
        {
                std::cout<<"Invalid choice please try again."<<std::endl;
                std::cin>>choice;
                choiceIsValid(choice);
                if(validChoice == true)
                {
                        break;
                }
        }
        return choice;
}

int message::gameOverMessage()
{
        std::cout<<"Game Over!"<<std::endl;
        std::cout<<"You failed to destroy the opposing sides Navy Fleet!"<<std::endl;
        std::cout<<"Choose one of the options below!"<<std::endl;
        std::cout<<"1) Play Battleship again!"<<std::endl;
        std::cout<<"2) Exit program."<<std::endl;
        std::cin>>choice;
        choiceIsValid(choice);
        while(validChoice == false)
        {
                std::cout<<"Invalid choice please try again."<<std::endl;
                std::cin>>choice;
                choiceIsValid(choice);
                if(validChoice == true)
                {
                        break;
                }
        }
        return choice;
}

int message::gameWonMessage()
{
        std::cout<<"Congratulations!"<<std::endl;
        std::cout<<"You succeded in destroying the opposing sides Navy Fleet"<<std::endl;
        std::cout<<"Choose one of the options below!"<<std::endl;
        std::cout<<"1) Play Battleship again!"<<std::endl;
        std::cout<<"2) Exit program."<<std::endl;
        std::cin>>choice;
        choiceIsValid(choice);
        while(validChoice == true)
        {
                std::cout<<"Invalid choice please try again."<<std::endl;
                std::cin>>choice;
                choiceIsValid(choice);
                if(validChoice == true)
                {
                        break;
                }
        }
        return choice;
}




