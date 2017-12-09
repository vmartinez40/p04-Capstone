#include "drones.h"

void drones::droneSpawner(std::vector <std::vector <std::string> > blankmap)
{
        numDrones = 0;
        while(numDrones < 15)
        {

                //srand ( time(NULL) );
                randRow = rand() % 9 + 1;
                randCol = rand() % 9 + 1;
                std::cout<<randRow << ", " <<randCol<<std::endl;
                if(blankmap[randRow][randCol] == "[ ]")
                {
                        blankmap[randRow][randCol] = "[D]";
                        numDrones++;
                }
        }
}
