#include <iostream>
using namespace std;

int main(){
    float divisao, numerador, denominador;

    std::cout << "informe um numero para o numerador: ";
    std::cin >> numerador;
    std::cout << "informe um numero para o denominador: ";
    std::cin >> denominador;
    divisao = numerador/denominador;
    std::cout << "O resultado da divisão é: " << divisao; 
}
