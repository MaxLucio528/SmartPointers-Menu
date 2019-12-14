#include "menu.hpp"
#include "clear.hpp"

// Shortening a command that will print a decoration of the menu.
#define line cout << "+------------------+" << endl;

// Constructor.
Menu::Menu(sharedStr title, vector<sharedStr> options)
{
    this->title = title;
    this->options = options;
}

// Destructor.
Menu::~Menu()
{
}

// Menu summoner method.
int Menu::getOptions()
{
    // Using a string for cases where the user type anything but a integer.
    string buffer;
    // From Clear class, will be used to summon the clearScreen method.
    Clear clear;

    // Exhibiting the menu title.
    line;
    cout << setw(17);
    cout << *title << endl;
    line;
    cout << endl;

    // Store the numbers that lists the options in the vector.
    int op = 0;

    // Will go through the options vector.
    vector<sharedStr>::iterator varre = options.begin();

    // Go through the options vector, printing it's options.
    while(varre != options.end())
    {
        cout << op << " - " << **varre << endl;
        varre++;
        op++;
    }

    // Allows the user to type a option and tries to return it if it's valid.
    cout << endl;
    line;
    cout << "\n";
    cout << "Choose a option: ";

    try
    {
        getline(cin, buffer);
        return stoi(buffer);
    }

    // If what the user typed wasn't a integer, then this is shown
    catch(exception& issue)
    {
        clear.clearScreen();
        cerr << "Error! You need to type a integer number!!" << endl;
        cerr << issue.what() << " exception." << endl;
        cout << endl;
        
        // Returning the smallest number possible for a specific program behavior.
        return -2147483646;
    }
}