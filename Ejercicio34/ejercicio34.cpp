#include <iostream>
#include <vector>


using namespace std;
int numero;
int num;
char respuesta;



void ingresar_coeficientes(vector<int> &vector) {
    cout << "Ingresando los coeficientes: " << endl;
    do{
        cout<<"Ingrese un numero: ";
        cin >> num;
        vector.push_back(num);
        cout << "Tiene otro numero para ingresar?" << endl;
        cout << "1. SI" << endl;
        cout << "2. NO" << endl;
        cin >> respuesta;
    }while (respuesta == '1');
}

void ingresar_numero(int &valor) {
    cout<<"Ingrese un numero para la especialización: ";
    cin >> valor;
}

int valor_al_exponente(int valor, int exp){
    if(exp==1){
        return valor;
    }else{
        return valor * valor_al_exponente(valor, exp-1);
    }
}

int especializacion(vector <int> vector, int valor, int exp, int pos = 0){

    if(exp == 0){
        return vector[pos];
    }else{
        return (vector[pos] * valor_al_exponente(valor, exp)) + especializacion(vector, valor, (exp-1), (pos+1));
    }

}

int main(){
    int nume;
    int resultado;
    vector<int> coeficientes;
    ingresar_coeficientes(coeficientes);
    cout << " " << endl;
    ingresar_numero(nume);
    resultado = especializacion(coeficientes, nume, (coeficientes.size() - 1));
    cout << " " << endl;
    cout<<"El resultado de la especialización da: " << resultado << endl;
    return 0;
}