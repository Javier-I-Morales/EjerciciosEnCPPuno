#include <iostream>
using namespace std;

double numero;

void set_numero(){
    cout<<"Ingrese un numero real: " ;
    cin >> numero;
}

void verificaNumero(){
    if(numero == 0){
        cout<<"El numero es igual a cero."<< endl;
    }
    else if(numero < 0){
        cout<<"El numero es menor a cero."<< endl;
    }
    else{
        cout<<"El numero es mayor a cero."<< endl;
    }
    
}

int main(){
    set_numero();
    verificaNumero();
return 0;
}