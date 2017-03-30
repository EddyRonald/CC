#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arreglo[100],a,;

    cout<<"Ingrese la cantidad de digitos:";
    cin>>a;

    for(int i=0;i<a;i++){
        cout<<"Ingrese los digitos:";cin>>arreglo[i];

    }


    for(int i=0;i<a;i++){
        cout<<i<<"->"<<arreglo[i]<<endl;
    }
    getch();
    return 0;
}
