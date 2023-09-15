#include <iostream>
#include <vector>
using namespace std;

vector <double> lista;
double num;

void sumaTotal(double num){
    lista.push_back(num);
    double sum = 0;
    cout << "Datos: ";
    for(int i = 0; i < lista.size(); i++){
        sum += lista[i];
        cout << lista[i] << " ";
    }
    cout << endl;
    cout << "El total de la suma de los datos es: " << sum << endl;
}

void IngresaDatos(){
    do{
        cout<<"Ingrese un numero: ";
        cin >> num;
        sumaTotal(num);
    }while (num != 0);
}

int main(){
    IngresaDatos();
    return 0;
}

