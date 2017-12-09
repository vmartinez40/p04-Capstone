/* Victor Martinez's Battleship Game
Things to do
1)Greet player 
2)Have 3 options (Play(Again?), Rules, and Quit)
3)Display a map of hits you made and if you hit any ships(make into class)
4)Randomly generate different size ships (1,2,3,4) and if they are vertical or horizontal(make into class)
5)High score load up high score file then check if its the highest score (pass by reference)
updating highscore.


*/

#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "map.h"
#include "message.h"

bool endOrStartGame(int);
int playGame();

message game;
Map playerMap;

int main()
{
    srand( time(NULL) );
    bool startGame = endOrStartGame(game.greeting());   
    bool gameOver;
        if(startGame == true)
        {
        std::cout<<"Loading Mission!"<<std::endl;
        playGame();

        }
        else if(startGame == false)
        {
            std::cout<<"Abandoning Mission!"<<std::endl;
            return 0;
        }
        
}

bool endOrStartGame(int outcome)
{
    bool startGame = false;
    if(outcome == 1)
    {
        startGame = true;
    }
    else if(outcome == 2)
    {
        startGame = false;
    }
    return startGame;
}

int playGame()
{
    playerMap.playGame();
    return 0;
}
