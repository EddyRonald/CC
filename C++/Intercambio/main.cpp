#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int a,b,temp;

    cout<<"Ingrese un digito:";cin>>a;
    cout<<"Ingrese otro digito:";cin>>b;

    temp = a;
    a = b;
    b = temp;

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

    getch();
    return 0;
}
