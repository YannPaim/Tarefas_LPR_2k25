/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Mediapares()
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

}

void ciquentaaquinhentos() 
{
    int soma = 0;

    for (int i= 50; i<500; i++)
    {
        if (i%2 != 0)
        {
            if (i%3 != 0)
            {
                soma +=i;
            }
        }
    }
    cout << (soma);
  }


void somadosdigitosaoquadrado() {
	int num;
	int numquadrado;
	int soma = 0;
	int sobra;

	cout << "Digite um numero: ";
	cin >> num;

	numquadrado = num * num;

	while (numquadrado > 0) {
		sobra = numquadrado % 10;
		soma += sobra;
		numquadrado /= 10;
	}

	cout << "A soma dos digitos do quadrado de " << num << " C) " << soma << endl;

}


int main() {
	int escolha;

	std::cout << "escolha o que deseja fazer:" << std::endl;
	std::cout << "1. calcular media dos numeros pares" << std::endl;
	std::cout << "2. calcular soma dos numeros impares multiplos de 3 que estejam entre 50 a 500" << std::endl;
	std::cout << "3. calcular soma dos digitos ao quadrado" << std::endl;
	std::cin >> escolha;

	switch (escolha) {
	case 1:
		Mediapares();
		break;
	case 2:
		ciquentaaquinhentos();
		break;
	case 3:
		somadosdigitosaoquadrado();
	}
	return 0;
}