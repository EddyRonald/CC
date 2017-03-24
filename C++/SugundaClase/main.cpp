#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main(){
    int numero,radio,lado,base,altura,area;

    cout<<"Opciones"<<endl;
    cout<<"1.Area del circulo"<<endl;
    cout<<"2.Area del cuadrado"<<endl;
    cout<<"3.Area del rectangulo"<<endl;
    cout<<"4.Salir"<<endl;
    cin>>numero;

    switch(numero){
        case 1:cout<<"Area del circulo"<<endl;
            cout<<"Ingrese el radio:";cin>>radio;
                radio = radio*radio;
            cout<<"El area del circulo es:"<<radio;
            break;
        case 2:cout<<"Area del cuadrado"<<endl;
            cout<<"Ingrese el lado:";cin>>lado;
                lado = lado*lado;
            cout<<"El area del circulo es:"<<lado;break;
        case 3:cout<<"Area del rectangulo"<<endl;
            cout<<"Ingrese la base:";cin>>base;
            cout<<"Ingrese la altura:";cin>>altura;
                area = base*altura;
            cout<<"El area del rectangulo es:"<<area;break;
        case 4:
            cout<<"Usted a salido del programa";break;
        default:
            cout<<"Opcion incorrecta";break;

    }
    getch();
    return 0;
}
