#include <iostream>

using namespace std;

int main(){
    double a = 1, b = 0, c, n;
    cout<<"Ingrese hasta el numero que desee:";
    cin >> n;
    for (int d = 0; d < n; d++){
    cout << b << " "; // 0 1 1 2
    c = a + b; // 1 2 3 5
    b = a;  // 1 1 2
    a = c;  // 1 2 3
    }
 return 0;
}
