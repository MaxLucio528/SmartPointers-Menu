/*
 *  SmartPointers-Menu
 *  CONTRIBUITORS:
 *  -> Max Lucio Martins de Assis (GitHub - MaxLucio528)
 * 
 *  PURPOSE: Generic menu made in C++ utilizing Smart Pointers, it's compatible with any C++
 *  program and in it's pure version, can run in any Operational System.
 */

#include <iostream>
#include <string>
#include <memory>

// Will include the classes from other files.
#include "process.hpp"
#include "clear.hpp"

int main()
{
    // Trying to execute the program normally.
    try
    {
        // From Clear class, will be used to summon the clearScreen method.
        Clear clear;

        clear.clearScreen();

        // Unique Pointer used to create a new process to run the program.
        unique_ptr<Process> program (new Process());
        program->process();
    }

    // Allocation error when trying to create the pointer to run the program processes.
    catch(bad_alloc& issue)
    {
        // From Clear class, will be used to summon the clearScreen method.
        Clear clear;

        clear.clearScreen();
        cout << endl;
        cerr << "Error when trying to allocate memory to execution! Program terminated!" << endl;
        cerr << issue.what() << " exception." << endl;
        cout << endl;
    }

    return 0;
}
