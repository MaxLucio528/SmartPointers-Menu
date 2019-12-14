#ifndef CLEAR_HPP
#define CLEAR_HPP

#include <iostream>

class Clear
{
    /*
     *  The public elements consistis of the constructor, destructor and the method that
     *  clears the terminal screen.
     */
    public:
        Clear();
        ~Clear();

        void clearScreen();
};

#endif