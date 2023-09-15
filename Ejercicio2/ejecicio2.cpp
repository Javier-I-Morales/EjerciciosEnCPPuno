#include <iostream>
using namespace std;

int tomaNumero(){

    int a = 0;
    cout << "Ingrese un número: " ;
    cin >> a;

    return a;
}

int suma(int a, int b) {
    return (a + b);
}

int resta(int a, int b){
    return a > b ? a - b : b - a;
}

int multiplicacion(int a, int b){
    return a * b;
}

int division(int a, int b){
    return a > b ? a / b: b / a;
}


int main(){

    int a = tomaNumero();
    int b = tomaNumero();
    
    cout <<"resultado de la suma: " << suma(a,b) << endl;
    cout <<"resultado de la resta: " << resta(a, b) << endl;
    cout <<"resultado de la multiplicación: " << multiplicacion(a, b) << endl;
    cout <<"resultado de la devisión: " << division(a, b) << endl;


    return 0;
}