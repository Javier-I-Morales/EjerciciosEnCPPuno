#include <iostream>
using namespace std;

string nombre="";

void tomaNombre(){
    cout<<"Ingrese su nombre por favor: ";
    cin >> nombre;
}

int main(){
    tomaNombre();
    cout << "Hola "<< nombre << endl;
    return 0;
}