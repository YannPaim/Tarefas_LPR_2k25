using System;
class HelloWorld {
  static void Main() 
  {
    int chute;
    int tentativas = 0;

    Random numaleatorio = new Random();
    int numsorteado = numaleatorio.Next(1, 100);

    do 
    {
       Console.WriteLine("Escreva um numero de 1 a 100 para tentar sua sorte");
       chute = Convert.ToInt32(Console.ReadLine());

    if (chute > numsorteado) 
    {
        Console.WriteLine("O numero sorteado é menor, tente novamente");
    }

    else if  (chute < numsorteado)
    {
        Console.WriteLine("O numero sorteado é maior, tente novamente");
    }
        tentativas++;
    }

    while (chute != numsorteado);1
    Console.WriteLine("voce acertou");
    Console.WriteLine("voce precisou de " + tentativas + " tentativas para acertar");
  }
}