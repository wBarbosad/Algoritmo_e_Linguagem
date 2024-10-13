/*

Cenário
Como você certamente sabe, devido a alguma razão astronômica, um ano pode ser bissexto ou comum . 
O primeiro tem 366 dias de duração, enquanto o último tem 365 dias.

Desde a introdução do calendário gregoriano (em 1582), a seguinte regra é usada para determinar o tipo de ano:

se o número do ano não for divisível por 4, é um ano comum;
caso contrário, se o número do ano não for divisível por 100, é um ano bissexto;
caso contrário, se o número do ano não for divisível por 400, é um ano comum;
caso contrário, será um ano bissexto.
O código deve gerar uma das duas mensagens possíveis, que sãoAno bissextoouAno comum, dependendo do valor inserido.

Seria bom verificar se o ano informado cai na era gregoriana e emitir um aviso caso contrário.

Teste seu código usando os dados que fornecemos.

*/

#include <iostream> 
using namespace std;
int main(){
    int ano, resultado;

    cout << "Informe o ano: ";
    cin >> ano;
    if(ano%4 != 0){
        cout << "Ano comum";
    } 
    else if(ano%100 != 0){
        cout << "Ano bissexto";
    }
    else if(ano % 400 != 0){
        cout << "Ano comum";
    } else cout << "Ano bissexto";
}