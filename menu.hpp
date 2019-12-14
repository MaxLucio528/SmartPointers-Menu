#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <memory>

// Shortening the declaration of a string shared pointer.
#define sharedStr shared_ptr<string>

using namespace std;

class Menu
{
    /*
     * The private variables consists of a string pointer, that will store the title and a vector
     *  of string shared pointer, that will store the menu options.
     */
    private:
        sharedStr title;
        vector<sharedStr> options;
    // The public elements consists of the constructor, destructor and the method that summons the menu.
    public:
        Menu(sharedStr, vector<sharedStr>);
        ~Menu();
        int getOptions();
};

#endif