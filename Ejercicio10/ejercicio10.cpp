#include <iostream>
using namespace std;

char operacion;
int numA;
int numB;

void setNumA(){
    cout<<"Ingrese un numero: ";
    cin >> numA;
}
void setNumB(){
    cout<<"Ingrese otro numero: ";
    cin >> numB;
}
void setOperacion(){
    cout<<"Ingrese la operación matemática: ";
    cin >> operacion;
}

void getOperacion(){
    cout<<"El resultado es ";
    switch (operacion)
    {
    case '+': cout << (numA + numB);break;
    case '-': cout << (numA - numB);break;
    case '*': cout << (numA * numB);break;
    case '/': cout << (numA / numB);break;
    default:break;
    }
}

int main(){
    setNumA();
    setNumB();
    setOperacion();
    getOperacion();

    return 0;
}