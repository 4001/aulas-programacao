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
    float vol, r, al;
    char tecla = '0';

    while(tecla != 27){

        system("cls");
        cout << "\n*** Menu Principal***\n \
                 \n1 - Ler o valor do raio.\
                 \n2 - Ler o valor da altura.\
                 \n3 - Calcular volume. \n" << endl;
        tecla = getch();
        system("cls");

        if(tecla == '1'){
            cout << "Digite o Valor do Raio: \n" << endl;
            cin >> r;
            cout << "Operação realizada com sucesso! \n\n" << endl;
            Sleep(2000);
        }
        else if(tecla == '2'){
            cout << "Digite valor da altura: \n" << endl;
            cin >> al;
            cout << "Operação realizada com sucesso! \n\n" << endl;
            Sleep(2000);
        }
        else if(tecla == '3'){
                vol = 3.1415 *(r*r)*al;
                cout << "Raio: \n" << r << endl;
                cout << "Altura: \n" << al << endl;
                cout << "Volume : " << vol << endl;
            Sleep(2000);
        }
        else{
            cout << "Valor inválido, digite novamente!"<< endl;
            Sleep(2000);
        }
    }
    system("pause");
    return 0;
}
