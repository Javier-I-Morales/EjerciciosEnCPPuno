#include <iostream>
#include <vector>


using namespace std;

const int maximo = 10;
typedef int matriz[maximo][maximo];


//int cantidad = 0;


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

void sumar_elementos_matriz(vector<int> &vector, int cant, matriz matriz){
    int suma = 0;
    for(int i = 0; i < cant; i++) {
        for(int j=0; j< cant; j++) {
            suma = suma + matriz[i][j];
        }
        vector.push_back(suma);
        suma = 0;
        cout << endl;
    }
}

void mostrar_vector(vector<int> vector, int cant){
    cout << "Vector resultante " << endl; 
    cout << "------------------" << endl;
    for(int i = 0; i < cant; i++) {
        cout << vector[i] << " ";
    }
}





int main(){
    int cantidad = ingresar_tamano();

    matriz matriz_A;
    vector <int> vector_suma;
    matriz_A[cantidad][cantidad];
    ingresar_datos(matriz_A, cantidad);

    sumar_elementos_matriz(vector_suma, cantidad, matriz_A);
    mostrar_vector(vector_suma, cantidad);
    return 0;
}