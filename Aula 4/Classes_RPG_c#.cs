/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
using System;
class HelloWorld {
  static void Main() 
  {
    int classes;
    
    Console.WriteLine("Escreva um numero para escolher uma classe sendo elas 1-Druida, 2-Sorcerer, 3-Paladino");
    classe = Convert.ToInt32(Console.ReadLine());
    
    switch (classe)
    {
        case 1:
        Console.WriteLine("Sua classe é Druida");
        Console.WriteLine("Suas Habilidades são: Good Berrys, Falar com os animais, Wild Shape");
        break;
        
        case 2:
        Console.WriteLine("Sua classe é Sorcerer"
        Console.WriteLine("Suas Habilidades são: Bola de fogo, Banimento, Fey Step");
        
        case 3:
        Console.WriteLine("Sua classe é Paladino");
        Console.WriteLine("Suas Habilidades são: Divine Smite, Ataque Extra, Cleansing Touch");
        break
        
    }
  }
}