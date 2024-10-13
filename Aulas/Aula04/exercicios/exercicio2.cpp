/*
Cenário
Onde quer que você esteja e o que quer que você pague, você geralmente gasta seu dinheiro em duas coisas:
 a primeira é para um bem ou serviço que você está comprando, e a segunda são impostos. Isso significa que 
 a quantia de dinheiro que você está transferindo (chamado de "preço bruto") para o vendedor é uma soma do 
 preço real (chamado de "preço líquido") e o imposto. O imposto é calculado como uma porcentagem do preço 
 líquido e sua taxa depende de muitos fatores imprevisíveis (por exemplo, onde você mora, o que você compra, etc.,
  etc., etc.).

Sua tarefa é escrever uma "calculadora de impostos" simples – ela deve aceitar dois valores: um preço bruto e uma taxa 
de imposto expressa em porcentagem (ou seja, um valor maior que 0 e, sejamos otimistas, menor que 100).

Observe o código abaixo – ele lê apenas dois valores de entrada e exibe os resultados, então você precisa completá-lo 
com alguns cálculos inteligentes.

Seria bom verificar se os valores inseridos 
são razoáveis ​​(por exemplo, o preço bruto é maior que zero e a taxa de imposto está na faixa mencionada anteriormente).

Teste seu código usando os dados que fornecemos.


*/

// O imposto é calculado como uma porcentagem do preço líquido 
// preço bruto e taxa de imposto em porcentagem


/*
#include <iostream>

using namespace std;

int main(void) {
	float grossprice, taxrate, netprice, taxvalue;
	
	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;
	
	// Insert you code here
	
	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	return 0;
}
*/

#include <iostream> 
using namespace std;

int main(){
    float precoBruto, taxaImposto, precoLiquido, valorDoImposto;
    cout << "Informe o preço bruto = ";
    cin >> precoBruto;
    cout << "Informe uma taxa de imposto = ";
    cin >> taxaImposto; 

    if(precoBruto < 0 && (taxaImposto>=0 && taxaImposto<=100)){
        cout << "Informe um preço maior que zero para o preço bruto";
        cout << "Preço bruto = ";
        cin >> precoBruto;
        cout << "Informe um preço maior que zero e menor que 100 para o imposto";
        cout << "Novo valor de imposto = ";
        cin >> taxaImposto;
    } else cout << "Valores dentro do padrão para os cálculos";

    precoLiquido = precoBruto - (precoBruto*(taxaImposto/100));
    valorDoImposto = (precoBruto*(taxaImposto/100));

    cout << "Preço líquido = " << precoLiquido << endl;
    cout << "Valor do imposto = " << valorDoImposto << endl;


}