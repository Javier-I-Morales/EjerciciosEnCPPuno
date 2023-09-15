#include <iostream>
#include <F:\UNAHUR - ALGORITMOS\Ejercicios\Ejercicio25\ejercicio25.cpp>
using namespace std;


int main(){
    double a ,b, c;

    cout << "Veamos si hay raices y cuales son..!!\n" << endl;

    cout << "Introduce el primer coeficiente: "; cin >> a; cout << "" << endl;
    
    cout << "Introduce el segundo coeficiente: "; cin >> b; cout << "" << endl;
    
    cout << "Introduce el tercer coeficiente: "; cin >> c; cout << "" << endl;
    
    cout << "Resultado de la operación: " << endl;

    mostrar_raices(a, b, c);

    return 0;
}