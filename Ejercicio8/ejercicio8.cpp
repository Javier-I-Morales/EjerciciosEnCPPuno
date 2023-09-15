#include<iostream>
using namespace std;

int numero;

void setNumero(){
    cout<<"Ingrese un numero: ";
    cin >> numero;
}
void esPar(){
    cout<<"El numero "<<numero << (numero%2==0? " es": " no es") <<" par."<<endl;
}
int main(){
    setNumero();
    esPar();

    return 0;
}