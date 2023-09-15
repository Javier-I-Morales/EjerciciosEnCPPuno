#include<iostream>
#include<vector>

using namespace std;


vector <int> vector_x;
vector<int> auxiliar;
vector <int> vector_x_clean;
int num;
char respuesta;

void IngresaDatos(){
    do{
        cout<<"Ingrese un numero: ";
        cin >> num;
        vector_x.push_back(num);
        cout << "Tiene otro numero para ingresar?" << endl;
        cout << "1. SI" << endl;
        cout << "2. NO" << endl;
        cin >> respuesta;
    }while (respuesta == '1');
}

bool contiene_elemento(vector<int> vector, int elemento){
    bool contiene = false;
    for(int i=0; i<=vector.size(); i++){
        if(vector[i] == elemento){
            contiene = true;
        }
    }
    return contiene;
}

vector<int> saca_elementos_iguales(vector<int> vector){
    auxiliar = vector;
    for(int i = 0 ; i < vector.size() ; i++){
        if(vector_x_clean.size() == 0){
            vector_x_clean.push_back(auxiliar.back());
        }
        else if(! contiene_elemento(vector_x_clean, auxiliar.back())){
            vector_x_clean.push_back(auxiliar.back());
        }
        auxiliar.pop_back();
    }
    return vector_x_clean;
}

// int main(){

//     IngresaDatos();
//     vector<int>nuevo_vector = saca_elementos_iguales(vector_x);
//     cout << " " << endl;
//     cout << "Elementos del vector sin repetidos: " << endl;
//     for(int i=0; i< nuevo_vector.size(); i++){
//         cout << nuevo_vector[i] << " ";
//     }

//     return 0;
// }