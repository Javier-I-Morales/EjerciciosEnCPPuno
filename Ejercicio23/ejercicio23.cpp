#include <iostream>
#include <vector>
using namespace std;


vector <vector<double>> listaDeListas;
double num;

void calcularMediaPorLote(){
    double sumaTotal = 0;
    cout << "Media de cada lote: " << endl;
    for (double i = 0; i < listaDeListas.size();i++){
        cout << i + 1 << "° Lote: ";
        double suma = 0;
        for (double j = 0; j < listaDeListas[i].size(); j ++)
        {
            suma = suma + listaDeListas[i][j];
        }
        cout << suma / listaDeListas[i].size() << endl;
        sumaTotal = sumaTotal + suma;
    }
    cout << "Media total de todos los lotes: " << sumaTotal / listaDeListas.size() << endl;
}

void calcularMediaTotal(){

}

void IngresaDatos(){
    do{
        vector <double> lista;
        do{
            cout<<"Ingrese un numero, 0 para terminar: ";
            cin >> num;
            if(num != 0){
                lista.push_back(num);
            }
        }while (num != 0);
        cout<<"Si desea crear un nuevo lote ingrese 1, 0 para terminar la carga de lotes: ";
            cin >> num;
            listaDeListas.push_back(lista);
    }while(num == 1);
}

int main(){
    IngresaDatos();
    calcularMediaPorLote();
    //calcularMediaTotal();
    return 0;
}