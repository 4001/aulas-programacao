#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float dis, tempo, velocidade, liU;
    char tecla = '0';

    while(tecla != 27){
        system("cls");

        cout << "\n*** Menu Principal***\n \
                 \n1 - Ler o tempo.\
                 \n2 - Ler o velocidade.\
                 \n3 - Calcular distância.\
                 \n4 - Calcular gasto em litros.\n" << endl;
        tecla = getch();
        system("cls");

        if(tecla == '1'){
            cout << "Digite o tempo da viagem: \n" << endl;
            cin >> tempo;
            cout << "Operação realizada com sucesso! \n\n" << endl;
            Sleep(2000);
        }
        else if(tecla == '2'){
            cout << "Digite a velocidade: \n" << endl;
            cin >> velocidade;
            cout << "Operação realizada com sucesso! \n\n" << endl;
            Sleep(2000);
        }
        else if(tecla == '3'){
                dis = tempo*velocidade;
                cout << "Distância: " << dis << endl;
            Sleep(2000);
        }
        else if(tecla == '4'){
                liU = dis/12;
                cout << "\nTempo: " << tempo << endl;
                cout << "\nVelocidade: " << velocidade << endl;
                cout << "\nDistância: " << dis << endl;
                cout << "\nQuantidade de gasolina gasta na viagem: " << liU << endl;
            Sleep(4000);
        }else{
            cout << "Valor inválido, digite novamente!"<< endl;
            Sleep(4000);
        }

    }

    system("pause");
    return 0;
}
