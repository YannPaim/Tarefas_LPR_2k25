using System;
class HelloWorld {
  static void Main() 
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
    Console.WriteLine(soma);
  }
}