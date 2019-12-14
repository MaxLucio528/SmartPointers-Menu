#include "process.hpp"
#include "clear.hpp"

// Constructor.
Process::Process()
{
}

// Destructor.
Process::~Process()
{ 
}

// This method executes the program.
void Process::process()
{
    // Stores the option selected by the user.
    int op;

    // From Clear class, will be used to summon the clearScreen method.
    Clear clear;

    // Defining the title and options of the menu via shared pointers.
    sharedStr title = makeStr ("MAIN MENU");
    vector<sharedStr> options = {makeStr ("Exit"), makeStr ("Option 1"), makeStr ("Option 2")};

    // Saving the title and options of the menu in a unique pointer.
    unique_ptr<Menu> menu (new Menu(title, options));

    // Loops the menu execution till the user wants to exit the program.
    do{
        // Storing the selected option and printing th menu via the getOptions method.
        op = menu->getOptions();

        // Redirecting to the selected option.
        switch(op)
        {
            case 0:
                clear.clearScreen();
                cout << "Exiting Program..." << endl;
                cout << endl;
            break;

            case 1:
                clear.clearScreen();
                cout << "Option 1..." << endl;
                cout << endl;
            break;

            case 2:
                clear.clearScreen();
                cout << "Option 2..." << endl;
                cout << endl;
            break;

            default:
                /*
                 *  Unique number to represent that the user typed a character or a string
                 *  instead of a integer, it breaks the switch. 
                 */
                if(op == -2147483646)
                    break;
                
                clear.clearScreen();
                cout << "Invalid Option!!" << endl;
                cout << endl;
            break;
        }
    }while(op != 0);
}