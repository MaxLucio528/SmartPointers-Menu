#ifndef MENU_HPP
#define MENU_HPP

// Bibliotecas necessárias
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <memory>

// Encurtando a declaração de um shared pointer de string
#define sharedStr shared_ptr<string>

using namespace std;

class Menu
{
    /* Os elementos privados consistem de um ponteiro de sting que guardará o título e um vector
    de ponteiros de string que guardará as opções do menu */
    private:
        sharedStr title;
        vector<sharedStr> options;
    // Os elementos públicos consistem do construtor, destrutor e um método que invoca o menu
    public:
        Menu(sharedStr, vector<sharedStr>);
        ~Menu();
        int getOptions();
};

#endif