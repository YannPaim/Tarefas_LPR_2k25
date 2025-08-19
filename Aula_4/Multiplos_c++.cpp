/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
    int num1;
    int num2;
    int resultado;
    
    std::cout<<"Escreva um numero: ";
    std::cin >> num1;
    
    std::cout<<"Escreva o outro numero para saber se é multiplo do primeiro numero digitado: ";
    std::cin >> num2;
    
    resultado = num2%num1;
    
    switch (resultado)
    {
        case 0:
        std::cout<<"O primeiro numero digitado é multiplo do segundo numero digitado";
        break;
        
        default:
        std::cout<<"O primeiro numero digitado não é multiplo do segundo numero digitado";
        break;

    }

    return 0;
}