#include <iostream>

using namespace std;


void tablaRelacionTemperatura(){
    cout << "| FAHRENHEIT | CELSIUS |" << endl;
    cout << "|  " << "0°" << "     |     " << ((0 - 32) * 5/9) << "°" << "    |    "<< endl;
    for(int i=1; i < 21; i++){
        cout << "|  " << i * 10 << "°" << "    |    " << (((i*10) - 32) * 5/9) << "°" << "    |     "<< endl;
    }
}





int main(){
    tablaRelacionTemperatura();
    return 0;
}