#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,b,c,d=0,e,f;

    cout<<"Ingrese el valor de a:";cin>>a;
    cout<<"Ingrese el valor de b:";cin>>b;
    cout<<"Ingrese el valor de c:";cin>>c;

    d = a - b % c;



    cout << "El resultado es " <<d<<endl;
    return 0;
}
