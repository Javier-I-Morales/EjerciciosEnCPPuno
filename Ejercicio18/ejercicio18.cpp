#include <iostream>
#include <vector>

using namespace std;

int numA;
int numB;
int numC;

void setNumA(){
    cout<<"Ingrese un numero: ";
    cin >> numA;
}
void setNumB(){
    cout<<"Ingrese otro numero: ";
    cin >> numB;
}
void realizarSuma(){
    for(int i=0; i<numB; i++){
        numC += numA;
    }
    cout << "El resultado de la multiplicación entre " << numA << " y " << numB << " es: " << numC << endl;
}

int main(){
    setNumA();
    setNumB();
    realizarSuma();

    return 0;
}