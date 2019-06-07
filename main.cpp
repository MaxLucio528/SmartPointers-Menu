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
        system("clear");
        // Se você utiliza Windows use (Sem aspas): "system("cls");"
        unique_ptr<Process> program (new Process());
        program->process();
    }

    // Situação onde houve um erro na alocação de memória para execução do programa
    catch(bad_alloc& issue)
    {
        system("clear");
        // Se você utiliza Windows use (Sem aspas): "system("cls");"
        cout << endl;
        cerr << "Erro ao alocar memória para execução! Programa encerrado!" << endl;
        cerr << issue.what() << " exception." << endl;
        cout << endl;
    }

    return 0;
}
