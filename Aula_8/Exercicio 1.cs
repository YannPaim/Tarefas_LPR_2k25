namespace Exercicio_1
{
    internal class Program
    {
        public struct Produto
        {
            public string Nome;
            public string Codigo;
            public float Preco;
            public int Quantidade;
        }

        static void Main(string[] args)
        {
            float valortot = 0;


            Produto[] estoque = new Produto[3];
            Console.WriteLine("Digite os dados dos produtos");

            for (int i = 0; i < 3; i++)
            {
                Console.Write("Nome: ");
                string nome = Console.ReadLine();

                Console.Write("Codigo: ");
                string codigo = Console.ReadLine();

                Console.Write("Preco: ");
                float preco = float.Parse(Console.ReadLine());

                Console.Write("Quantidade: ");
                int quantia = int.Parse(Console.ReadLine());

                estoque[i] = new Produto {Nome = nome, Codigo = codigo, Preco = preco, Quantidade = quantia};
            }

            foreach (Produto produtinho in estoque)
            {
                valortot += produtinho.Preco * produtinho.Quantidade;
            }

            Console.WriteLine("O valor total do estoque e de: " + valortot + " reais");
        }
    }
}
