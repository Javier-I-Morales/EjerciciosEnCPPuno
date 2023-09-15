#include <iostream>
#include <vector>
#include <F:\UNAHUR - ALGORITMOS\Ejercicios\Ejercicio27\ejercicio27.cpp>

using namespace std;

vector<int> vector_mcmmcd;

int mcd(int a, int b){
    if(a < b){
        int c = a;
        a = b;
        b = c;
    }
    if(a % b == 0)return b;
    return mcd(b, a % b);
}

int mcm(int a, int b, int i = 2){
    if(a == 1 && b == 1){
        return 1;
    }
    else if(a % i == 0 && b % i == 0){
        a = a / i;
        b = b / i;
        return  i * mcm(a, b, i);
    }
    else if(a % i == 0 && b % i != 0){
        a = a / i;
        return i * mcm(a, b, i);
    }
    else if(a % i != 0 && b % i == 0){
        b = b / i;
        return i * mcm(a, b, i);
    }
    else{
        do
        {
            i = i + 1;
        } while (! esPrimo(i));
        return mcm(a, b, i);
    }
    
}

void mcm_mcd(int a, int b){

    vector_mcmmcd.push_back(mcm(a, b));
    vector_mcmmcd.push_back(mcd(a, b));
    cout << "El MCM es: " << vector_mcmmcd[0] << " y el MCD es: " << vector_mcmmcd[1] << endl;

}
int main(){

    mcm_mcd(36,60);

    return 0;
}