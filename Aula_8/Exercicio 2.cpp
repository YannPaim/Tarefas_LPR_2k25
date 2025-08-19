// Exercicio 2 (aula 8).cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
using namespace std;

struct Livro
{
    string Titulo;
    string Autor;
    int AnoPubli;
    int NumPags;
    double Preco;
};

int main()
{
    Livro livros[3];
    double precotot = 0;
    double mediapags = 0;
    int totpags = 0;

    cout << "Digite os dados dos livros: " << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Titulo: ";
        getline(cin >> ws, livros[i].Titulo);

        cout << "Autor: ";
        getline(cin >> ws, livros[i].Autor);

        cout << "AnoPubli: ";
        cin >> livros[i].AnoPubli;

        cout << "Numero de paginas: ";
        cin >> livros[i].NumPags;

        cout << "Preco: ";
        cin >> livros[i].Preco;

        precotot += livros[i].Preco;
        totpags += livros[i].NumPags;
    }

    mediapags = totpags / 3;

    cout << "Preco total dos livros foi de: " << precotot << " reais" << endl;
    cout << "Media de paginas e de: " << mediapags << " paginas" << endl;

}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
