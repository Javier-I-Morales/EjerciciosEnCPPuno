#include <iostream>
#include <vector>

#include <F:\UNAHUR - ALGORITMOS\Ejercicios\Ejercicio36\ejercicio36.cpp>
#include <F:\UNAHUR - ALGORITMOS\Ejercicios\Ejercicio37\ejercicio37.cpp>


using namespace std;

const int maximus = 10;
typedef int matriz[maximus][maximus];

int  ingresar_tamano() {
    int cant = 2;
    do
    {
        cout<<"Ingrese un tamaño de los lados de la matriz, máximo 10: ";
        cin >> cant;
    } while (cant > maximus);
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

bool es_matriz_identidad(int cant, matriz matriz){
    int diagonal = 0;
    int elementos = 0;
    for(int i = 0; i < cant; i++) {
        for(int j=0; j< cant; j++) {
            if(i == j){
                diagonal = diagonal + matriz[i][j];
            }else{
                elementos = elementos + matriz[i][j];
            }
        }
        cout << endl;
    }
    return (diagonal == cant && elementos == 0);
}

bool es_matriz_identidad(int cant, matriz matriz){
    int diagonal = 0;
    int elementos = 0;
    for(int i = 0; i < cant; i++) {
        for(int j=0; j< cant; j++) {
            if(i == j){
                diagonal = diagonal + matriz[i][j];
            }else{
                elementos = elementos + matriz[i][j];
            }
        }
        cout << endl;
    }
    return (diagonal == cant && elementos == 0);
}


int main(){
    int cantidad = ingresar_tamano();

    matriz matriz_A;
    vector <int> vector_suma;
    matriz_A[cantidad][cantidad];
    ingresar_datos(matriz_A, cantidad);

    bool resultado = es_matriz_identidad(cantidad, matriz_A);
    cout <<"La traza de la matriz es: "<< resultado << endl;
    return 0;
}