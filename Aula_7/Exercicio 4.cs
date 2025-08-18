namespace Exercício_4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[,] A = new int[3, 3];
            int[,] B = new int[3, 3];
            int[,] result = new int[3, 3];

            Console.WriteLine("Escreva os valores da primeira matriz 3x3");

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Console.Write("");
                    A[i, j] = Convert.ToInt32(Console.ReadLine());
                }
            }


            Console.WriteLine("Escreva os valores da segunda matriz 3x3");

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Console.Write("");
                    B[i, j] = Convert.ToInt32(Console.ReadLine());
                }
            }

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    result[i, j] = 0;

                    for (int k = 0; k < 3; k++)
                    {
                        result[i, j] += A[i, k] * B[k, j];
                    }
                }
            }

            Console.WriteLine("O valor da multiplicacao das matrizes e de: ");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Console.Write(result[i, j] + " ");
                }
                Console.WriteLine();
            }
        }
    }
}
