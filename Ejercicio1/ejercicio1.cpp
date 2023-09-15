#include <iostream>

using namespace std;

int numero(){
    int numero;

    cout << "Ingrese un numer: " ;
    cin >> numero;

    return numero;
}

void imprimeNumero(int numero){
    cout << "Numero Ingresado: " << numero << endl;
}


int main(){

    imprimeNumero(numero());
    
    return 0;
}