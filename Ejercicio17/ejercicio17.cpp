#include <iostream>
#include <vector>

using namespace std;

vector <int> lista;
double menor, mayor;
int cantMenor, cantMayor, num;
char respuesta;

bool verificaMenor(int numero){
    bool esMenor = false;
    if(numero < menor){
        menor = numero;
        cantMenor = 1;
        esMenor = true;
    }else if(numero == menor){
        cantMenor += 1;
        esMenor = true;
    }
    return esMenor;
}
void verificaMayor(int numero){
    bool esMenor = false;
    if(numero > mayor){
        mayor = numero;
        cantMayor = 1;
        esMenor = true;
    }else if(numero == mayor){
        cantMayor += 1;
    }
}

void MostrarMenMay(){
    menor = lista[0];
    mayor = lista[0];
    for(int i=0; i<lista.size(); i++){
        if(!verificaMenor(lista[i])){
            verificaMayor(lista[i]);
        }
    }
    cout << "El Menor es " << menor << " y aparece " << cantMenor << "veces" << endl;
    cout << "El Mayor es " << mayor << " y aparece " << cantMayor << "veces" << endl;
}

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


int main(){
    IngresaDatos();
    MostrarMenMay();
    return 0;
}