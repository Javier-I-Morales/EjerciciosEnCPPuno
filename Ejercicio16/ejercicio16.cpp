#include <iostream>
#include <vector>
using namespace std;

vector <double> lista;
double minimo, maximo, num;
int posicionMin, posicionMax;


char respuesta;

void mostrarMinimoMaximo(){
    minimo = lista[0]; 
    maximo = lista[0];
    for(int i=0; i<lista.size(); i++){
        if(lista[i] < minimo){
            minimo = lista[i];
            posicionMin = i;
        }
        else if(lista[i] > maximo){
            maximo = lista[i];
            posicionMax = i;
        }
    }

    cout<<"El minimo es " << minimo << " y se encuentra en la posición "<< posicionMin << endl;
    cout<<"El máximo es " << maximo << " y se encuentra en la posición "<< posicionMax << endl;
}
void IngresaDatos(){
    do{
        cout<<"Ingrese un numero: ";
        cin >> num;
        lista.push_back(num);
        mostrarMinimoMaximo();
        cout << "Tiene otro numero para ingresar?" << endl;
        cout << "1. SI" << endl;
        cout << "2. NO" << endl;
        cin >> respuesta;
    }while (respuesta == '1');
}


int main(){
    IngresaDatos();
    return 0;
}