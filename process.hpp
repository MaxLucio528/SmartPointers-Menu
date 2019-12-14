#ifndef PROCESS_HPP
#define PROCESS_HPP

#include <iostream>
#include <string>
#include <vector>
#include <memory>

// Will use Menu class.
#include "menu.hpp"

// Shortening the declaration of a string shared pointer.
#define sharedStr shared_ptr<string>
// Shortening the allocation of a string shared pointer.
#define makeStr make_shared<string>

class Process
{
    /*
     * The public elements consists of the constructor, destructor and the method of
     * the program execution. 
     */
    public:
        Process();
        ~Process();

        void process();
};

#endif
