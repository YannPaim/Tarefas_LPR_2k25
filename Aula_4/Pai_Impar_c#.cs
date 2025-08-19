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
		int num;
		int parimpar;
		Console.WriteLine("Digite um numero inteiro para saber se ele C) par ou C-mpar: ");
		num = Convert.ToInt32(Console.ReadLine());

		parimpar = num%2;

		switch (parimpar)
		{
		case 0:
			Console.WriteLine("O numero " + num + " C) par");
			break;

		case 1:

			Console.WriteLine("O numero " + num + " C) impar");
			break;

		}
	}
}