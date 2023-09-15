#include <iostream>

using namespace std;

int numA;


void setNumA(){
    cout<<"Ingrese un numero: ";
    cin >> numA;
}
void recorrerNumAMas20(){
    for(int i = numA;i < (numA+20);i++){
        cout<< i << " ";
    }
}

int main(){
    setNumA();
    recorrerNumAMas20();

    return 0;
}