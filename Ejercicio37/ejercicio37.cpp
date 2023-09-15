#include <iostream>
#include <vector>

using namespace std;

const int maximo = 10;
typedef int matriz[maximo][maximo];

int  ingresar_tamano() {
    int cant = 2;
    do
    {
        cout<<"Ingrese un tamaño de los lados de la matriz, máximo 10: ";
        cin >> cant;
    } while (cant > maximo);
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

int traza_de_matriz(int cant, matriz matriz){
    int suma = 0;
    for(int i = 0; i < cant; i++) {
        for(int j=0; j< cant; j++) {
            if(i == j){
                suma = suma + matriz[i][j];
            }
        }
        cout << endl;
    }
    return suma;
}


int main(){
    int cantidad = ingresar_tamano();

    matriz matriz_A;
    vector <int> vector_suma;
    matriz_A[cantidad][cantidad];
    ingresar_datos(matriz_A, cantidad);

    int resultado = traza_de_matriz(cantidad, matriz_A);
    cout <<"La traza de la matriz es: "<< resultado << endl;
    return 0;
}