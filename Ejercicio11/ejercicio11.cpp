#include <iostream>
using namespace std;

int opcion;

void menu(){
    cout<<"Elija una de las siguientes opciones: " << endl;
    cout<<"Opcion 1: " << endl;
    cout<<"Opcion 2: " << endl;
    cout<<"Opcion 3: " << endl;
    cout<<"Opcion 4: " << endl;
    cin >> opcion;
}


void getOpciones(){
    cout<<"Selección: opción ";
    switch (opcion)
    {
    case 1: cout << "1.";break;
    case 2: cout << "2.";break;
    case 3: cout << "3.";break;
    case 4: cout << "4.";break;
    default: cout << "incorrecta." ;break;
    }
}

int main(){
    menu();
    getOpciones();

    return 0;
}