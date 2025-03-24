#include <iostream>
using namespace std;

int main()
{
    double soma = 0;
    int quantidadenums;
    int quantia = 0;
    int nums = 0;

    cout<<"Digite quantos numeros ira escrever: ";
    cin >> quantidadenums;
    int contador = 0;

    while(contador < quantidadenums)
    {
        cout << "digite um Numero" <<endl;
        cin >> nums;

        if (nums %2 == 0)
        {
            soma += nums;
            quantia++;
        }
        contador++;
    }
        double media = soma/quantia;
        cout << "Sua media é: " << media << endl;

    return 0;
}