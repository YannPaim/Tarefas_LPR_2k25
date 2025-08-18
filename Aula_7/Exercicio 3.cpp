// Exercicio 3.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int dists[4][4] = {
      {0,   524, 521, 882},
      {524,   0, 434, 586},
      {521, 434,   0, 429},
      {882, 586, 429,   0}
    };

    string cidades[4] = { "Vitoria", "Belo Horizonte", "Rio de Janeiro", "Sao Paulo" };

    int dist1 = -1;
    int dist2 = -1;

    string cid1;
    string cid2;

   cout << "Escreva a primeira cidade entre Vitoria, Belo Horizonte, Rio de Janeiro e Sao Paulo: ";
   getline(cin >> ws, cid1); // "ws" ignora espaços em branco, tipo a barra de espaço

   cout << "Escreva outra cidade: ";
   getline(cin >> ws, cid2);

   if (cid1 == cid2)
   {
       cout << "As cidades sao as mesmas" << endl;
       cout << "Autodestruicao ativada" << endl;
       cout << "3" << endl;
       cout << "2" << endl;
       cout << "1" << endl;
       cout << "BOOOM!!!" << endl;
       return 0;
   }

   for (int i = 0; i < 4; i++) 
   {
       if (cid1 == cidades[i])
       {
           dist1 = i;
       }
       if (cid2 == cidades[i])
       {
           dist2 = i;
       }
   }

   if (dist1 == -1 || dist2 == -1)
   {
       cout << "Cidade invalida";
   }
   else
   {
       cout << "A distancia entre as duas cidades e de: " << dists[dist1][dist2] << "km" << endl;
   }
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
