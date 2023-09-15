#include <iostream>
#include <vector>


using namespace std;

const int maximo = 10;
typedef int matriz[maximo][maximo];

int  ingresar_tamano() {
    int cant = 2;
    do
    {
        cout<<"Ingrese un tamaño de los lados de la matriz, minimo 2 y máximo 10: ";
        cin >> cant;
    } while (cant > maximo || cant < 2);
    cout << endl;
    return cant;
}

void ingresar_datos(matriz &matriz, int cant) {
    cout << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Ingresando valores a la matriz " << endl; 
    cout << "-----------------------------------------" << endl;
    for(int i = 0; i < cant; i++) {
        cout << i + 1 << "° fila " << endl; 
        cout << "-----------------------------------------" << endl;
        for(int j=0; j< cant; j++) {
            cout << "Ingrese valor para el " << j + 1 << "° lugar: "; cin >> matriz[i][j];
        }
        cout << endl;
    }
    
}