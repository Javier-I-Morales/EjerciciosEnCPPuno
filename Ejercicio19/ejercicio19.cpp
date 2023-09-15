#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <double> lista;
double num;

void tresMayores(){
    int cant = lista.size();
    cout << "Los tres mayores son: ";
    sort(lista.begin(), lista.end());
    for(int i = cant; i > cant - 3 ; i--){
        cout << lista[i - 1] << " ";
    }
}

void IngresaDatos(){
    do{
        cout<<"Ingrese un numero, 0 para terminar: ";
        cin >> num;
        lista.push_back(num);
    }while (num != 0);
}

int main(){
    IngresaDatos();
    tresMayores();
    return 0;
}