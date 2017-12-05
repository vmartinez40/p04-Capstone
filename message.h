#ifndef _MESSAGE_H
#define _MESSAGE_H

#include <iostream>
#include <string>

class message
{
    private:int choice; bool validChoice;
    public:int greeting(); int gameOverMessage(); int gameWonMessage(); bool choiceIsValid(int);
};
#endif
