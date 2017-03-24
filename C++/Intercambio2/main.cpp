#include <iostream>

using namespace std;

int main(){
    int x,z;

    cout<<"Digite el valor de x:";cin>>x;
    cout<<"Digite el valor de y:";cin>>z;
    cout<<"El valor de x es"<<x<<" " "y de z es"<<z<<endl;

    x = x+z;
    z = x-z;
    x = x-z;

    cout <<"El valor de x es:"<<x<<endl;
    cout <<"El valor de z es:"<<z<<endl;



    return 0;
}


