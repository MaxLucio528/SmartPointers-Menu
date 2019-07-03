#include "clear.hpp"

// Construtor
Clear::Clear()
{
}

// Destrutor
Clear::~Clear()
{ 
}

// Método que limpa a tela do terminal
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