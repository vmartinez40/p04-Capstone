#ifndef _DRONES_H_
#define _DRONES_H_

#include <cstdlib>
#include <vector>
#include <string>
#include <ctime>
#include <iostream>

class drones
{
    private:int randRow; int randCol; int numDrones; 
    public:void droneSpawner(std::vector <std::vector <std::string> > blankmap);
};
#endif
