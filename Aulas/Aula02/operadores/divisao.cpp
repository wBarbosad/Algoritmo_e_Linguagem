#include <iostream>
#include <locale>
using namespace std; //usando bibliotecas padrão do C++

int main(){ //C++ Accept the result of function main how int;
    std::setlocale(LC_ALL, "pt_BR.UTF-8");
    int numero1, numero2; //declaration of the multiplication numbers;
    std::cin >> numero1; //get of input a first number;
    std::cin >> numero2; //get of input a second number;
    std::cout << numero1*numero2; //obtain the multiplication of the numbers
    return 0;
}