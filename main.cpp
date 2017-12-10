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
void playGame();
void isNewHighScore(int & playerHighScore);

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
            int playerHighScore = playerMap.highscore();
            isNewHighScore(playerHighScore);
            return 0;
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

void playGame()
{
    playerMap.playGame();
}

void isNewHighScore(int & playerHighScore)
{
    std::cout<<"Evaluating your score!\n";
    std::cout<<"Your score was "<<playerHighScore<<std::endl;

    std::ifstream inFile;
    inFile.open("highestscore.txt"); 
    int highestScore;

    inFile >> highestScore;

    std::cout<<"The high score is "<<highestScore<<std::endl;
    
    if(playerHighScore > highestScore)
    {
        std::ofstream outFile("highestscore.txt");
        outFile<<playerHighScore<<std::endl;
        std::cout<<"Congrats you now have the highest score!\n";
    }
    else std::cout<<"Sorry, you did not get the highest score\n";
    
    inFile.close();

}







