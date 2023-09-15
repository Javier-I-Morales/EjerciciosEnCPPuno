#include <iostream>
using namespace std;

int aux;
int segundosTotales;
int dias;
int horas;
int minutos;
int segundos;


void setSegundosTotales(){
    cout << "Ingrese los segundos: ";
    cin >> segundosTotales;
}
void setDias(){
    dias = segundosTotales / 86400;
}
void setHoras(){
    aux = (segundosTotales - (dias * 86400));
    horas = aux / 3600;
}
void setMinutos(){
    aux = (aux - (horas * 3600));
    minutos = aux / 60;
}
void setSegundos(){
    segundos = (aux - (minutos * 60));
}


void pasaje(){
    setDias();
    setHoras();
    setMinutos();
    setSegundos();
}

void resultado(){
    cout << "Con los segundos suministrados obtenermos ";
    cout << dias <<" días, "<< horas << " horas, " << minutos << " minutos, " << segundos << " segundos." << endl;
}

int main(){
    setSegundosTotales();
    pasaje();
    resultado();
    return 0;
}