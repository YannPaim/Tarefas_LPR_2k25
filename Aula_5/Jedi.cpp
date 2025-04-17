#include <iostream>
using namespace std;
int main() {
        int horasdia;
        int dias;
        int semanas;
        int meses;
        int horas;
        
        cout << "digite quantas horas de treino voce faz por dia meu padawan: ";
        cin >> horasdia;
        horas = 1000;
        dias = 0;
        
        while (horas > 0) 
        {
            
        if (dias % 5 < 4) 
        {
        horas -= horasdia;
        }
        
        dias++;
        
        }
        
        semanas = dias / 5;
        meses = semanas / 4.5;
        dias = dias % 5;
        cout << "voce precisara treinar por " << semanas << " semanas, " << dias << " dias e " << meses << " meses para alcançar as 1000 horas de treinamento jedi, meu caro padawan." << endl;
        return 0;
}