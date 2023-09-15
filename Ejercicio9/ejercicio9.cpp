#include <iostream>
using namespace std;

int numM;
int numN;

void setNumM(){
    cout<<"Ingrese un numero: ";
    cin >> numM;
}
void setNumN(){
    cout<<"Ingrese otro numero: ";
    cin >> numN;
}
void esDivisible(){
    cout<<"El numero "<< numM << (numM%numN==0? " es": " no es") <<" divisible por "<< numN << endl;
}
int main(){
    setNumM();
    setNumN();
    esDivisible();

    return 0;
}