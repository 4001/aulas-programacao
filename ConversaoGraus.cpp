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
    float c, f;
    double conF, conC;
    char tecla = '0';

    while(tecla !=27){
        //Tela

        system("cls");

        cout << "\n*** Menu Principal***\n \
        \n1 - Ler valor em Graus Celsius. \
        \n2 - Ler valor em Fahrenheit. \
        \n3 - Converter Graus Celsius em Fahrenheit. \
        \n4 - Converter Graus Fahrenheit em Celsius.\n\n";
        tecla = getch();
        system("cls");

        //Tratamento do menu

        if(tecla == '1'){
            cout << "Digite o valor em Graus Celsius: \n" << endl;
            cin >> c;
            cout << "Operação realizada com sucesso! \n\n" << endl;
            Sleep(2000);
        }
        else if(tecla == '2'){
            cout << "Digite valor em Graus Fahrenheit: \n" << endl;
            cin >> f;
            cout << "Operação realizada com sucesso! \n\n" << endl;
            Sleep(2000);
        }
        else if(tecla == '3'){
            conF = (9*c+160)/5;
            cout << "Graus Celsius: " << c << endl;
            cout << "Graus Fahrenheit: " << conF << endl;
            Sleep(2000);
        }
        else if(tecla == '4'){
             cout << "Graus Fahrenheit: " << f << endl;
             conC = (f-32)*5/9;
             cout << "Graus Celsius: " << conC << endl;
             Sleep(2000);
        }else{
            cout << "Valor inválido, digite novamente!"<< endl;
            Sleep(2000);
        }
    }
    system("pause");
    return 0;
}
