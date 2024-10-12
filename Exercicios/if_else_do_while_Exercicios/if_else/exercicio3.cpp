/*Crie uma calculadora simples que permite ao usuário inserir dois números e escolher
uma operação básica ( +, -, *, /). O programa deve continuar girando até
que a escolha do usuário saia, usando do-while.*/

#include <iostream>
using namespace std;
int subtracao(int numero1, int numero2);
int adicao(int numero1, int numero2);
int multiplicacao(int numero1, int numero2);
float divisao(int numero1, int numero2); // Usar converter inteiro para float.

int main()
{
    int numero1, numero2, operacao;

    do
    {
        cout << "\nCalculadora\n"
             << "Escola uma das opções abaixo:"
             << "1 - Adição\n2 - Subtracao\n3 - Divisão\4 - Multiplicação\5 - Sair\n\nOpção escolhida = ";
        cin >> operacao;

        if (operacao == 2)
        {
            cout << "\nInforme um número = ";
            cin >> numero1;
            cout << "\nInforme o segundo número = ";
            cin >> numero2;

            cout << "\n"
                 << "\nResultado da subtração = " << subtracao(numero1, numero2) << endl;
            system("pause");
        }
    } while (operacao != 5);
}

int subtracao(int numero1, int numero2)
{
    return numero1 - numero2;
}