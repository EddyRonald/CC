#include <iostream>

using namespace std;

int main()
{
    int arreglo[100],x,z=0,y,c,d;
    cout<<"Ingrese la cantidad de digitos:";cin>>x; //Pedimos que ingrese la cantidad de su vector
    for(int i=0;i<x;i++){
        cout<<"Ingrese el digito:";cin>>arreglo[i]; //Coloca los numeros segun a la cantidad de su vector
    }
    for(int i=0;i<x;i++){
        cout<<i<<"->"<<arreglo[i]<<endl; // Imprimimos para ver si esta bien
    }
    cout<<"-----------------------------------------------------------------"<<endl;
    for(int i=0;i<x;i++){
        z += arreglo[i];
        cout<<z<<endl;
    }
    cout<<"-----------------------------------------------------------------"<<endl;
    c = arreglo[0];
    for(int i=1;i<x;i++){
        if(arreglo[i]>c){
            c= arreglo[i];
        }
    }
    cout<<"El mayor es:"<<c<<endl;
    return 0;
}
