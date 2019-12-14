#include "clear.hpp"

// Constructor.
Clear::Clear()
{
}

// Destructor.
Clear::~Clear()
{ 
}

// Method that clears the terminal screen.
void Clear::clearScreen()
{
    #ifndef POWERSHELL
        system("clear");
    #else
        #ifndef WINDOWS
            system("cls");
        #else
            system("clear");
        #endif
    #endif
}