#include <iostream>
using namespace std;


int numA;


void setNumA(){
    cout<<"Ingrese un numero: ";
    cin >> numA;
}

int factorial(int num){
    if(num == 1){
        return 1;
    }else{
        return num  * factorial(num - 1);
    }
}

int main(){
    setNumA();
    cout<<"El factorial de "<<numA<<" es "<< factorial(numA);

    return 0;
}