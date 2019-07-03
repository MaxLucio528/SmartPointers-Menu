#include "menu.hpp"
#include "clear.hpp"

// Encurtando função que imprime uma decoração do menu
#define line cout << "+------------------+" << endl;

// Construtor
Menu::Menu(sharedStr title, vector<sharedStr> options)
{
    this->title = title;
    this->options = options;
}

// Destrutor
Menu::~Menu()
{
}

// Método invocador de menu
int Menu::getOptions()
{
    // Utilizando uma string para casos onde o usuário digita algo além de um número
    string buffer;
    // Variável da classe Clear que será utilizada para invocar o método clearScreen
    Clear clear;

    // Exibindo o título do menu
    line;
    cout << setw(17);
    cout << *title << endl;
    line;
    cout << endl;

    // Este inteiro guardará o número que lista as opções do vector
    int op = 0;

    // Iterator que percorrerá o vector das opções
    vector<sharedStr>::iterator varre = options.begin();

    // Este laço percorre o vector, imprimindo as opções do menu
    while(varre != options.end())
    {
        cout << op << " - " << **varre << endl;
        varre++;
        op++;
    }

    // Este trecho permite o usuário digitar a opção e tenta retorná-la se for válida
    cout << endl;
    line;
    cout << "\n";
    cout << "Escolha uma opção: ";

    try
    {
        getline(cin, buffer);
        return stoi(buffer);
    }

    // Caso o que o usuário digitou não for um número esse trecho é executado
    catch(exception& issue)
    {
        clear.clearScreen();
        cerr << "Erro! Você precisa digitar um número!!" << endl;
        cerr << issue.what() << " exception." << endl;
        cout << endl;
        
        // Retornando o menor número possível para comportamento específico do programa
        return -2147483646;
    }
}