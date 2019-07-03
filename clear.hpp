#ifndef CLEAR_HPP
#define CLEAR_HPP

// Bibliotecas necessárias
#include <iostream>

class Clear
{
    /* Os elementos públicos consistem do construtor, destrutor e o método que limpa a 
    tela do terminal */
    public:
        Clear();
        ~Clear();

        void clearScreen();
};

#endif