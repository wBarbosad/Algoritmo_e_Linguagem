/*Verificação de idade*/

#include <iostream>

int main(){
    int idade;
    std::cout << "Informe a idade = ";
    std::cin >> idade;

    if(idade < 18) std::cout << "Usuário menor de idade!";
    else std::cout << "Usuário maior de idade";
    return 0;
}