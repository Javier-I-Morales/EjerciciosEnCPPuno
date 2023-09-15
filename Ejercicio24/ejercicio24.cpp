#include <iostream>

using namespace std;


bool tiene_raices(double a, double b, double c){
    return ((b * b) - (4 * a * c)) >= 0;;
}

// int main(){
//     cout << tiene_raices(1, 2, 5);
//     return 0;
// }