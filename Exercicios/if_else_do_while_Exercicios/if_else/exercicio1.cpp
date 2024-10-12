/*Escreva um programa que peça ao usuário para inserir 
um número inteiro e verifique se ele é par ou é impossível usar*/

#include <iostream>

using namespace std;

int main(){
    int numero1;
    bool x = false;
    do{
        cin >> numero1;
        if(numero1%2 == 0) {
            cout << "Numero par = " << numero1; 
            x = true;
        }
        else cout << "Numero = " << numero1 << " é ímpar" << endl;
    } while(x!=true);

    return 0;
}