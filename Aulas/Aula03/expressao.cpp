#include <iostream> 

using namespace std;
int main(){
    int pi = 3.1415;
    float x, y;

    cout << "Informe um valor para X: ";
    cin >> x;

    y = ((x*x)/((pi*pi)*((x*x)+(1/2))))*((1+((x*x)/((pi*pi)*((x*x)-(1/2))))));

    cout << "Y = " << y;

}