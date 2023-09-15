#include<iostream>
#include<vector>


using namespace std;



vector<int> vector_suma;
int cant_n;
int producto_escalar;

int set_producto_escalar(vector<vector<int>> vectores , int n = -1){
    if(n == -1){
        n = vectores.size() - 1;
    }
    if(n == 0){
        producto_escalar = producto_escalar + (vectores[0][n]) * (vectores[1][n]);
    }
    else{
        producto_escalar = ((vectores[0][n]) * (vectores[1][n])) + set_producto_escalar(vectores , n - 1 );
    }

    return producto_escalar;
}
void get_producto_escalar(){
    cout << "El valor del producto escalar es: " << endl;
    cout << producto_escalar;
    cout << " " << endl;
}

void set_vector_suma(vector<vector<int>> vectores){
    for(int i=0; i < vectores[0].size(); i++){
        int val = (vectores[0][i]) + (vectores[1][i]);
        vector_suma.push_back(val);
    }
}
void get_vector_suma(){
    cout << "Los valores del vector suma son: " << endl;
    for(int i : vector_suma){
        cout << i << " ";
    }
    cout << " " << endl;
}
void datos_vector(vector<vector<int>>& vectores){
    cout << "Ingrese la cantidad de elementos de los vectores: " << endl;
    cin >> cant_n ;
    int cant_v = 0;
    cout << " " << endl;
    int x;
    for(int i=0; i < 2; i++){
        vector<int> vec;
        cout << "Ingresando datos para el vector " << i + 1 << endl;
        for(int j=0; j < cant_n; j++){
            cout << "Ingrese el " << (j + 1) << " valor: " ;
            cin >> x;
            vec.push_back(x);
        }
        vectores.push_back(vec);
        cout << " " << endl;
    }
}

int main(){
    vector<vector<int>> vectores;
    datos_vector(vectores);
    set_vector_suma(vectores);
    get_vector_suma();
    set_producto_escalar(vectores);
    get_producto_escalar();

    return 0;
}