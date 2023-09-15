#include <iostream>
#include <vector>
using namespace std;

struct Empleado{string nombre; double salario;};
vector <Empleado> lista;
double num;
Empleado menorSalario;
Empleado mayorSalario;
char respuesta;

void IngresaDatos(){
    do{
        Empleado empleado;
        cout<<"Ingrese el nombre: ";
        cin >> empleado.nombre;
        cout<<"Ingrese el salario: ";
        cin >> empleado.salario;
        lista.push_back(empleado);
        cout << "Tiene otro empleado para ingresar?" << endl;
        cout << "1. SI" << endl;
        cout << "2. NO" << endl;
        cin >> respuesta;
    }while (respuesta == '1');
}

void mostrarMinimoMaximoSalario(){
    menorSalario = lista[0]; 
    mayorSalario = lista[0];
    for(int i=0; i<lista.size(); i++){
        if(lista[i].salario < menorSalario.salario){
            menorSalario = lista[i];
        }
        else if(lista[i].salario > mayorSalario.salario){
            mayorSalario = lista[i];
        }
    }

    cout<<"El menor salario es " << menorSalario.salario << " y pertenece a  "<< menorSalario.nombre << endl;
    cout<<"El mayor salario es " << mayorSalario.salario << " y pertenece a "<< mayorSalario.nombre << endl;
}

int main(){
    IngresaDatos();
    mostrarMinimoMaximoSalario();
    return 0;
}