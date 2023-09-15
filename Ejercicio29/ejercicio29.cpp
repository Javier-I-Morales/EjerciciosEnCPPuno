#include <iostream>
#include <vector>
#include <F:\UNAHUR - ALGORITMOS\Ejercicios\Ejercicio27\ejercicio27.cpp>

using namespace std;


vector <int> primos;


vector <int> primos_2_hasta_200(){
    int i = 2;
    do
    {
        if(esPrimo(i)){
            primos.push_back(i);
        }
        i = i + 1;
    } while (i < 200);

    for(int i : primos){
        cout << i << " ";
    }

    return primos;
}

int main(){
    
    primos_2_hasta_200();

    return 0;
}