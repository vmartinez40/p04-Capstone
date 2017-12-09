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





