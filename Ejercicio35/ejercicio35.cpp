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

void ingresar_datos(matriz &matriz, int cant, char tipo) {
    cout << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Ingresando valores a la matriz " << tipo << endl; 
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

void sumar_matrices(matriz &suma, int cant, matriz a, matriz b){
    for(int i = 0; i < cant; i++) {
        for(int j=0; j< cant; j++) {
            suma[i][j] = (a[i][j] + b[i][j]);
        }
        cout << endl;
    }
}

void mostrar_suma(matriz matriz, int cant){
    cout << "Matriz resultante " << endl; 
    cout << "------------------" << endl;
    for(int i = 0; i < cant; i++) {
        for(int j=0; j< cant; j++) {
            cout << " | " << matriz[i][j] << " | " ;
        }
        cout << endl;
    }
}





int main(){
    int cantidad = ingresar_tamano();

    matriz matriz_A;
    matriz matriz_B;
    matriz matriz_suma;
    matriz_A[cantidad][cantidad];
    matriz_B[cantidad][cantidad];
    ingresar_datos(matriz_A, cantidad, 'A');
    ingresar_datos(matriz_B, cantidad, 'B');
    sumar_matrices(matriz_suma, cantidad,matriz_A,matriz_B);
    mostrar_suma(matriz_suma, cantidad);
    return 0;
}