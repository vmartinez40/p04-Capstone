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
        int numDrones = 15; 
        int mapSize = 10;
        bool gameIsOver = false;
        int shotsLeft = 8;
        int hits = 0;


        public:
        void createDroneMap();
        void createPlayerMap();
        void displayMap(std::vector <std::vector <std::string> >); 
        void updatePlayerMap(int, int);
        void playGame();
};
#endif
