#include <iostream>
#include <vector>
#include <F:\UNAHUR - ALGORITMOS\Ejercicios\Ejercicio32\ejercicio32.cpp>

using namespace std;

vector <int> vector_A;
vector <int> vector_B;
vector <int> vector_union;
vector <int> vector_interseccion;
//vector<vector<int>> vectores{vector_A, vector_B};
int numero, respue;

void IngresaDatosVector(vector<int> &vector){
    cout << "Ingresando datos a vector: " << endl;
    do{
        cout<<"Ingrese un numero: ";
        cin >> numero;
        vector.push_back(numero);
        cout << "Tiene otro numero para ingresar?" << endl;
        cout << "1. SI" << endl;
        cout << "2. NO" << endl;
        cin >> respue;
    }while (respue == 1);
    
}

vector<int> ordenar_vectores(vector<int> vec){
    int x = 0;
    vector<int> v_aux;
    for(int i=0; i < vec.size();i++){
        x = vec[i];
        int cont = 0;
        auto iter = begin(v_aux);
        while((iter != end(v_aux)) and (x > v_aux[cont])){
            iter ++;
            cont ++;
        }
        v_aux.insert(iter,x);
    }
    return v_aux;
}

vector<int> retorna_union(vector<int> a, vector<int> b){
    vector<int> v_aux = a.size() >= b.size()? a : b;
    vector<int> menor_cant = a.size() >= b.size()? b : a;

    for(int i = 0; i < menor_cant.size(); i++){
        if(!contiene_elemento(v_aux, menor_cant[i])){
            v_aux.push_back(menor_cant[i]);
        }
    }
    return ordenar_vectores(v_aux);
}

vector<int> retorna_interseccion(vector<int> a, vector<int> b){
    vector<int> menor_cant = a.size() >= b.size()? b : a;
    vector<int> v_aux;

    for(int i = 0; i < menor_cant.size(); i++){
        if(contiene_elemento(a, menor_cant[i])){
            v_aux.push_back(menor_cant[i]);
        }
    }
    return ordenar_vectores(v_aux);
}

int main(){

    vector<int> a;//{2,1,6,5,4};
    vector<int> b;//{2,4,8};
    vector<int> c;
    vector<int> d;


    IngresaDatosVector(a);
    IngresaDatosVector(b);
    
    cout <<" "<< endl;

    a = ordenar_vectores(a);
    b = ordenar_vectores(b);

    c = retorna_union(a, b);
    d = retorna_interseccion(a, b);

    cout << "Elementos de la unión de vectores: " << endl;
    for (int i = 0; i < c.size(); i++){
        cout << c[i] << " ";
    }
    cout <<" " << endl;
    cout << "Elementos de la intersección de vectores: " << endl;
    for (int i = 0; i < d.size(); i++){
        cout << d[i] << " ";
    }
    

    
    return 0;
}