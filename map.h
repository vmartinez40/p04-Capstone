#ifndef _MAP_H_
#define _MAP_H_

#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>
class Map
{
        private:
        std::vector <std::vector <std::string> > droneMap; 
        std::vector <std::vector <std::string> > playerMap;
        int numDrones; 
        int mapSize;
        bool gameIsOver;
        int shotsLeft;
        int hits;


        public:
        void createDroneMap();
        void createPlayerMap();
        void displayMap(std::vector <std::vector <std::string> >); 
        void updatePlayerMap(int, int);
        void playGame();
        int highscore();
        Map();
};
#endif

