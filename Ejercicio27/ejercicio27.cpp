#include <iostream>

using namespace std;

bool esPrimo(int a, int b = 0){

    if(b == 0) b = a - 1;
    if(b == 1 || a == 1) return true;
    else if(a % b == 0) return false;
    else return esPrimo(a, b - 1);
}


// int main(){

//     cout << esPrimo(1) << endl;
//     return 0;
// }