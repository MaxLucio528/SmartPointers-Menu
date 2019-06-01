#include "process.hpp"

// Construtor
Process::Process()
{
}

// Destrutor
Process::~Process()
{ 
}

// Método que executa o programa
void Process::process()
{
    // Inteiro que guarda a opção selecionada pelo usuário
    int op;

    // Aqui estão sendo definidos o título e as opções do menu por meio de shared pointers
    sharedStr title = makeStr ("MENU PRINCIPAL");
    vector<sharedStr> options = {makeStr ("Sair"), makeStr ("Opcao 1"), makeStr ("Opcao 2")};

    // Unique pointer que da classe Menu para salvar o título e as opções do menu
    unique_ptr<Menu> menu (new Menu(title, options));

    // While que repete a execução do menu até o usuário desejar finalizar o programa
    do{
        // Guardando a opção selecionada e imprimindo o menu por meio de getOptions
        op = menu->getOptions();

        // Redirecionando para a opção escolhida por meio do switch
        switch(op)
        {
            case 0:
                system("clear");
                cout << "Saindo do Programa..." << endl;
                system("sleep 1");
            break;

            case 1:
                system("clear");
                cout << "Opção 1..." << endl;
            break;

            case 2:
                system("clear");
                cout << "Opção 2..." << endl;
            break;

            default:
                /* Caso específico onde o usuário digitou um caracter ou string nas opções, fazendo 
                com que o programa se comporte de maneira específica para mais informações verifique
                o arquivo menu.cpp */
                if(op == -2147483646)
                    break;
                
                system("clear");
                cout << "Opção Inválida!!" << endl;
                cout << endl;
            break;
        }
    }while(op != 0);
}