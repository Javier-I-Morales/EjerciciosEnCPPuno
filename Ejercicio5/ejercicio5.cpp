#include <iostream>
#include <Math.h>

using namespace std;

double base;
double altura;
void setBase(){
    cout<<"Ingrese la base del rectangulo: ";
    cin >> base;
}
void setAltura(){
    cout<<"Ingrese la altura del rectangulo: ";
    cin >> altura;
}
void getPerimetro(){
    cout << "El perimetro del rectangulo es: " << ((base*2) + (altura*2)) << endl;
}
void getSuperficie(){
    cout << "La superficie del rectangulo es: " << base * altura << endl;
}
int main(){
    setBase();
    setAltura();
    getPerimetro();
    getSuperficie();
    return 0;
}