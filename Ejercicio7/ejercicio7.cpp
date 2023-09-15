#include <iostream>

using namespace std;

float numA;
float numB;

void setNumA(){
    cout<<"Ingrese un numero"<<endl;
    cin >> numA;
}
void setNumB(){
    cout<<"Ingrese otro numero"<<endl;
    cin >> numB;
}
void getMayor(){
    cout << "El mayor de ellos es: " << (numA > numB ? numA : numB) << endl;
}

int main(){
    setNumA();
    setNumB();
    getMayor();
    return 0;
}