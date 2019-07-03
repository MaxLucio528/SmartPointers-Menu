/* 
    Smart Pointers Menu:

    FEITO POR: Max Lucio Martins de Assis
    ALTERADO EM: 3 de Julho de 2019
    Inspirado no Modelo de Menu do Prof. Dr. André F. de Angelis
*/

// Bibliotecas necessárias
#include <iostream>
#include <string>
#include <memory>

// Incluindo as classes Process e Clear
#include "process.hpp"
#include "clear.hpp"

int main()
{
    // Tentando executar o programa normalmente
    try
    {
        // Variável da classe Clear que será utilizada para invocar o método clearScreen
        Clear clear;

        clear.clearScreen();

        unique_ptr<Process> program (new Process());
        program->process();
    }

    // Situação onde houve um erro na alocação de memória para execução do programa
    catch(bad_alloc& issue)
    {
        // Variável da classe Clear que será utilizada para invocar o método clearScreen
        Clear clear;

        clear.clearScreen();
        cout << endl;
        cerr << "Erro ao alocar memória para execução! Programa encerrado!" << endl;
        cerr << issue.what() << " exception." << endl;
        cout << endl;
    }

    return 0;
}
