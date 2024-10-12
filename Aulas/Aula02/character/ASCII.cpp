#include <iostream>
using namespace std;

int main(){
    char caracter, caracter1, caracter2;

    caracter = 32; //Atribuo os valores da tabela ASCII para obter o caracter desejado.
    std::cout << caracter;
    cout << '\\';  // A barra invertida é usada como um escapa, de modo que, ao usá-la pela primeira vez ela tira o significado 
    // do próximo item como character;

    cout << "\aADAWDWDADWADWADA1\r"; //O cursor retorna ao começo dessa linha e o conteúdo debaixo sobrescreve o conteúdo anterior..
    cout << "2dawdwadawdwdwdada\n";
    cout << "3dadwodkawodkawodkaww\a"; //Emite um som

    caracter1 = '\047'; //Caracter com base em um número octal
    cout << "\n" << caracter1;
    caracter2 = '\x27'; //Caracter com base em um número hexadecimal
    cout << "\n" << caracter2;
}