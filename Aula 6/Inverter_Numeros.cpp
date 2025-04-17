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

string invertenumeros (int num)
{
    string stringnum = to_string(num);
    reverse(stringnum.begin(), stringnum.end());
    return stringnum;
    
}

int main()
{
    int num;
    string numinverso;
    
    cout << "escreva um numero: ";
    cin >> num;
    
    numinverso = invertenumeros(num);
    
    cout << "A ordem dos números invertida (detrás para frente) é: " << numinverso;
    

}
