/* 
    Smart Pointers Menu:

    FEITO POR: Max Lucio Martins de Assis
    ALTERADO EM: 1 de Junho de 2019
    Inspirado no Modelo de Menu do Prof. Dr. André F. de Angelis
*/

// Bibliotecas necessárias
#include <iostream>
#include <string>
#include <memory>

// Incluindo as classes Menu e Process
#include "menu.hpp"
#include "process.hpp"

int main()
{
    // Tentando executar o programa normalmente
    try
    {
        unique_ptr<Process> program (new Process());
        program->clearScreen();
        program->process();
    }

    // Situação onde houve um erro na alocação de memória para execução do programa
    catch(bad_alloc& issue)
    {
        Process clear;
        clear.clearScreen();
        cout << endl;
        cerr << "Erro ao alocar memória para execução! Programa encerrado!" << endl;
        cerr << issue.what() << " exception." << endl;
        cout << endl;
    }

    return 0;
}
