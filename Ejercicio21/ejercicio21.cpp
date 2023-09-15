#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <double> lista;
vector <double> listAux;
double num;
char respuesta;

void IngresaDatos(){
    do{
        cout<<"Ingrese un numero: ";
        cin >> num;
        lista.push_back(num);
        cout << "Tiene otro numero para ingresar?" << endl;
        cout << "1. SI" << endl;
        cout << "2. NO" << endl;
        cin >> respuesta;
    }while (respuesta == '1');
}

bool ordenadaAscendente(){
    bool ordenada = true;
    for(int i = 0; i < lista.size() - 1; i++){
        if(lista[i] > lista[i+1]){
            ordenada = false;
        }
    }
    return ordenada;
}
bool ordenadaDescendente(){
    bool ordenada = true;
    for(int i = 0; i < lista.size() - 1; i++){
        if(lista[i] < lista[i+1]){
            ordenada = false;
        }
    }
    return ordenada;
}

string verificaOrden(){

    if(ordenadaAscendente()){
        return "La lista esta ordenada de forma ascendente.";
    }
    else if(ordenadaDescendente()){
        return "La lista esta ordenada de forma descendente.";
    }
    else{
        return "La lista no esta oredenada.";
    }
}

int main(){
    IngresaDatos();
    cout << verificaOrden();
    return 0;
}