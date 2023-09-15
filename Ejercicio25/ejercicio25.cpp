#include <iostream>
#include <vector>
#include <cmath>

#include <F:\UNAHUR - ALGORITMOS\Ejercicios\Ejercicio24\ejercicio24.cpp>

using namespace std;


bool mostrar_raices(double a, double b, double c){
    bool respuesta = false;
    cout << tiene_raices(a,b,c) << endl;
    if(tiene_raices(a,b,c)){

        respuesta = true;

        double menosB = - b;
        double dospoA = 2 * a;
        double raiz = sqrt((b * b) - (4 * a * c));

        cout << "Raiz: " << (menosB + raiz) / dospoA << endl;
        cout << "Raiz: " << (menosB - raiz) / dospoA << endl;
    }
    
    return respuesta;

}

// int main(){
//     cout << mostrar_raices(1, 5, 0);
//     return 0;
// }