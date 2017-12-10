#include "map.h"

Map::Map()
{
    numDrones = 15;
    mapSize = 10;
    gameIsOver = false;
    shotsLeft = 8;
    hits = 0;

}

void Map::createDroneMap()
{
        droneMap.resize(mapSize);
        //Fills rest of vector with empty spaces
        for(int r = 0;r < mapSize; r++)
        {
                droneMap[r].resize(mapSize);
        }
        //Filled first row and column with numbers
        for(int c = 0; c<mapSize; c++)
        {
            droneMap[0][c] = "["+ std::to_string(c) + "]";
            droneMap[c][0] = "["+ std::to_string(c) + "]";
        }
        
        //Fills in first row with cords

        for(int r = 1; r < mapSize; r++)
        {
                for(int c = 1; c < mapSize; c++)
                {
                    droneMap[r][c] = "[ ]";
                }
        }
        int counter = 0;
        while(counter < 15)
        {
                int randRow = rand() % 9 + 1;
                int randCol = rand() % 9 + 1;
                if(droneMap[randRow][randCol] == "[ ]")
                {
                        droneMap[randRow][randCol] = "[D]";
                        counter++;
                }
        }
}

void Map::createPlayerMap()
{
        playerMap.resize(mapSize);
        //Fills rest of vector with empty spaces
        for(int r = 0;r < mapSize;r++)
        {
                playerMap[r].resize(mapSize);
        }
        //Filled first row and column with numbers
        for(int c = 0; c<mapSize;c++)
        {
            playerMap[0][c] = "["+ std::to_string(c) + "]";
            playerMap[c][0] = "["+ std::to_string(c) + "]";
        }
        
        //Fills in first row with cords

        for(int r = 1; r < mapSize; r++)
        {
                for(int c = 1; c < mapSize; c++)
                {
                    playerMap[r][c] = "[ ]";
                }
        }
}

void Map::displayMap(std::vector <std::vector <std::string> > baseMap)
{

        for(int r = 0;r < baseMap.size();r++)
        {
                for(int c = 0;c < baseMap[r].size();c++)
                {
                        std::cout<<baseMap[r][c];
                }
                std::cout<<std::endl;
        }
}


void Map::updatePlayerMap(int cordX, int cordY)
{
    if(droneMap[cordY][cordX] == "[D]")
    {
        playerMap[cordY][cordX] = "[H]";
        hits++;
    }
    else
    {
        playerMap[cordY][cordX] = "[M]";
        shotsLeft--;
    }
    displayMap(playerMap);

}

void Map::playGame()
{
    createDroneMap();
    createPlayerMap();
    std::cout<< "PlayerMap\n";
    displayMap(playerMap);
    while(gameIsOver == false)
    {
        int cordX, cordY;
        std::cout<<"Insert X Cordinate\n";
        std::cin>>cordX;
        while(cordX < 1 || cordX > 9)
        {
            std::cout<<"Invalid Cordinate!\n";
            std::cin>>cordX;
        }
        std::cout<<"Insert Y Cordinate\n";
        std::cin>>cordY;
        while(cordY < 1 || cordY > 9)
        {
            std::cout<<"Invalid Cordinate!\n";
            std::cin>>cordY;
        }
        updatePlayerMap(cordX,cordY);
        if(hits == 15)
        {
            std::cout<<"You Win! Try Again?\n";
            gameIsOver = true;
        }
        if(shotsLeft == 0)
        {
            std::cout<<"You Lose! Try Again?\n";
            gameIsOver = true;
        }
        std::cout<<"You have "<<shotsLeft<<" shots left!"<<std::endl;
    }
} 

int Map::highscore()
{
    int score;
    int hitScore = hits * 3;
    score = hitScore;
    return score;
} 
