#include <iostream>
#include <math.h>

using namespace std;

double radio;

const int num = 4;
const double pi = 3.14;


void tomaRadio(){
    cout<<"Ingrese el radio de la esfera: ";
    cin >> radio;
}


int main(){
    tomaRadio();
    double superficie = num * pi * pow(radio, 2);
    double volumen = (num * pi * pow(radio,3))/3;
    cout<<"Si radio de la esfera es: "<< radio << endl;
    cout<<"La superficie de la misma es : "<< superficie << endl;
    cout<<"El volumen de la misma es : "<< volumen << endl;

    return 0;
}