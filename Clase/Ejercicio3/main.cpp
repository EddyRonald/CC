#include <iostream>

using namespace std;

int main()
{
    int arreglo[100],x,z,y;
    cout<<"Ingrese la cantidad de digitos:";cin>>x; //Pedimos que ingrese la cantidad de su vector
    for(int i=0;i<x;i++){
        cout<<"Ingrese el digito:";cin>>arreglo[i]; //Coloca los numeros segun a la cantidad de su vector
    }
    for(int i=0;i<x;i++){
        cout<<i<<"->"<<arreglo[i]<<endl; // Imprimimos para ver si esta bien
    }
    for(int i=0;i<(x/2);i++){              //Cambiamos las varibles
        z = arreglo[i];
        arreglo[i]=arreglo[x-1-i];
        arreglo[x-1-i]= z;
    }
    for(int i=0;i<x;i++){
        cout<<i<<"->"<<arreglo[i]<<endl;
     }
    return 0;
}
