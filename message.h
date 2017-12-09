#ifndef _MESSAGE_H_
#define _MESSAGE_H_

#include <iostream>
#include <string>

class message
{
    private:
    int choice; 
    bool validChoice;
    public:
    int greeting(); 
    bool choiceIsValid(int);
};
#endif
