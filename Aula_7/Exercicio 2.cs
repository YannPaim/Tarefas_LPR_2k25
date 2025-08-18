using System;
using System.Globalization;

namespace Exercicio_2_Vetor
{
    internal class Program
    {
        static void Main(string[] args)
        {
            const int N = 10;
            int[] nums = new int[N];
            int numpes = 0;
            int[] posicoes = new int[N];
            int repeticoes = 0;

            Console.WriteLine("Escreva 10 números: ");
            for (int i = 0; i < N; i++)
            {
                Console.Write($"Numero: ");
                nums[i] = Convert.ToInt32(Console.ReadLine());
            }
            Console.Write("Escreva o numero voce quer procurar: ");
            numpes = Convert.ToInt32(Console.ReadLine());

            for (int i = 0; i < N; i++)
            {
                if (nums[i] == numpes)
                {
                    posicoes[repeticoes] = i;
                    repeticoes++;
                }
            }

            if ( repeticoes == 0 )
            {
                Console.WriteLine("O numero não foi encontrado");
            }

            else
            {
                Console.WriteLine("O numero " + numpes + " foi encontrado " + repeticoes + " vez(es), na posicao/posicoes ");
                for (int i = 0; i < repeticoes; i++)
                {
                    Console.WriteLine($"{posicoes[i]}");
                }
            }
        }
    }
}
