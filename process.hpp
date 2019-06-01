#ifndef PROCESS_HPP
#define PROCESS_HPP

// Bibliotecas necessárias
#include <iostream>
#include <string>
#include <vector>
#include <memory>

// Incluindo a classe menu
#include "menu.hpp"

// Encurtando a declaração de um shared pointer de string
#define sharedStr shared_ptr<string>
// Encurtando a alocação de memória de um shared pointer de string
#define makeStr make_shared<string>

class Process
{
    /* Os elementos públicos consistem do construtor, destrutor e o método de execução 
    do programa */
    public:
        Process();
        ~Process();

        void process();
};

#endif
