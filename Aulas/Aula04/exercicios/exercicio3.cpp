/*
Entre os muitos sistemas de medição disponíveis, dois parecem ser os mais difundidos: métrico e imperial. 
Para simplificar, supomos que o primeiro usa o "metro" como sua única unidade (expresso como um número real), 
enquanto o segundo usa o "pé" (sempre um inteiro) e a "polegada" (um número real).

Sua tarefa é escrever um "conversor de medição" simples. Queremos que ele execute as seguintes ações:

pergunte ao usuário qual sistema ele/ela usa para inserir dados; assumimos que 0 significa "métrico" 
e 1 significa "imperial";

dependendo da resposta do usuário, pergunte em metros ou pés e polegadas;
emitir a distância em unidades adequadas (diferentes): em pés e polegadas ou em metros;
um resultado gerado como métrico deve ser algo como 123,4 m ;
um resultado gerado como imperial deve ser algo como 12'3.5" .
Olhe o código no editor – é apenas um modelo. Use-o para implementar o conversor inteiro.

Torne seu código inteligente – ele não deve ser enganado por entradas estúpidas ou irracionais.

Teste seu código usando os dados que fornecemos.
*/

/*metro = numero real
imperial = pé = inteiro 
polegada = real

conversor de medidas

qual sistema quer usar? 
*/

#include <iostream> 
using namespace std; 
int main(){
    int sistema; 

    cout << "\n\nOlá, escolha o sistema que deseja trabalhar\n\n0 - Métrico\n1 - Imperial"
}