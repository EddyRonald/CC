#include <iostream>

using namespace std;

int main()
{
   int x , y;
   cout<<"Ingrese la dimension x:";cin>>x;
   cout<<"Ingrese la dimension y:";cin>>y;
   int arreglo[x][y];
   for(int i=0;i<x;i++){
        for(int z=0;z<y;z++){
        cout<<"Ingrese el digito:";cin>>arreglo[i][z];
    }
   }
   for(int i=0;i<x;i++){
        for(int z=0;z<y;z++){
        arreglo[i]*[z];
    }
   }
   for(int i=0;i<x;i++){
        for(int z=0;z<y;z++){
        cout<<arreglo[i][z];
    }
   }
    return 0;
}
