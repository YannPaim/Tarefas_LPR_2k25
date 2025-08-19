namespace Exercicio_3__aula8_
{
    internal class Program
    {
        struct Heroi
        {
            public string Nome;
            public string Poder;
            public int Pontuacao;
        }
        static void Main(string[] args)
        {
            Heroi[] herois = new Heroi[5];
            int qtdHerois = 0;
            Heroi heroi = new Heroi();
            int simnao = 0;
            int escolha = 0;

            for (int i = 0; i < herois.Length; i++)
            {


                Console.WriteLine("Cadastre um Heroi iniciando por seu nome: ");
                heroi.Nome = Console.ReadLine();

                Console.WriteLine("Poder: ");
                heroi.Poder = Console.ReadLine();

                Console.WriteLine("Pontuacao: ");
                heroi.Pontuacao = Convert.ToInt32(Console.ReadLine());

                herois[qtdHerois] = heroi;
                qtdHerois++;
            }

            Console.WriteLine("Monte um trio com os herois cadastro, sendo os herois cadastros");

            for (int i = 0; i < qtdHerois; i++)
            {
                Console.WriteLine($"{i + 1} - {herois[i].Nome} | Poder: {herois[i].Poder} | Pontuação: {herois[i].Pontuacao}");
            }

            Heroi[] equipe = new Heroi[3];
            Console.WriteLine("Escreva o numero para selecionar o heroi para a equipe: ");

            for (int i = 0; i < 3; i++)
            {
                Console.Write($"Herói {i + 1}: ");
                escolha = Convert.ToInt32(Console.ReadLine()) - 1;
                equipe[i] = herois[escolha];
            }

            Console.WriteLine("A equipe formada foi");

            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine($"{i + 1} - {equipe[i].Nome} ({equipe[i].Poder}) | Pontuação: {equipe[i].Pontuacao}");
            }
        }
    }
}
