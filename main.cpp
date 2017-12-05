/* Victor Martinez's Battleship Game
Things to do
1)Greet player 
2)Have 3 options (Play(Again?), Rules, and Quit)
3)Display a map of hits you made and if you hit any ships(make into class)
4)Randomly generate different size ships (1,2,3,4) and if they are vertical or horizontal(make into class)
5)


*/

#include <string>
#include <iostream>
//#include <filestream>
#include <ctime>
#include "message.h"

bool endOrPlay(int);

int main()
{
    bool gameOver = false;
    message game;

    endOrPlay(game.greeting());   
    if(gameOver == false)
    {
        std::cout<<"Loading Mission!"<<std::endl;
        //load txt file of instructions
    }
    if(gameOver == true)
    {
        return 0;
    }


    return 0;
}

bool endOrPlay(int outcome)
{
    bool gameOver = false;
    if(outcome == 1)
    {
        gameOver = false;
    }
    else if(outcome == 2)
    {
        gameOver = true;
    }
    return gameOver;
}
