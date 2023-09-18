#include <iostream>
#include <vector>

//#include <C:\Users\javier.morales\Desktop\javier\unahur\algoritmos\ejercicios\EjerciciosEnCPPuno\carga_matrices.cpp>
#include <F:\UNAHUR - ALGORITMOS\EjerciciosEnCPPuno\carga_matrices.cpp>


using namespace std;


void incluir_minimos(matriz matriz,vector <int> &vector, int cantidad){
    int val;
    for(int i=0; i < cantidad; i++){
        val = matriz[i][0];
        for(int j=0; j < cantidad; j++){
            if(val > matriz[i][j]){
                val = matriz[i][j];
            }
        }
        vector.push_back(val);
    }
}

int main(){

    int cantidad = ingresar_tamano();

    matriz matriz;
    vector <int> vector;
    matriz[cantidad][cantidad];
    ingresar_datos(matriz, cantidad);
    incluir_minimos( matriz, vector, cantidad);
}