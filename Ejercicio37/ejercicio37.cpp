#include <iostream>
#include <vector>

//#include <C:\Users\javier.morales\Desktop\javier\unahur\algoritmos\ejercicios\EjerciciosEnCPPuno\carga_matrices.cpp>
#include <F:\UNAHUR - ALGORITMOS\EjerciciosEnCPPuno\carga_matrices.cpp>

using namespace std;



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