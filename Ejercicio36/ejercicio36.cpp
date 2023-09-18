#include <iostream>
#include <vector>

//#include <C:\Users\javier.morales\Desktop\javier\unahur\algoritmos\ejercicios\EjerciciosEnCPPuno\carga_matrices.cpp>
#include <F:\UNAHUR - ALGORITMOS\EjerciciosEnCPPuno\carga_matrices.cpp>

using namespace std;


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