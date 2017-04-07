#include <iostream>

using namespace std;

int suma(const int array[], const int longth ){
    int sum = 0;
    for(int i=0;i<longth;sum+=array[i++]);
    return sum;
}

int promedio(const int array[],const int longth){
    float prom = 0;
    prom = suma(array,longth)/longth;
    return prom;
}


int invertir( int array[],const int longth){
    for(int i=0;i<(longth/2);i++){
        int temp;
        temp = array[i];
        array[i] = array[longth-i-1];
        array[longth-1-i]=temp;
    }
    for(int i=0;i<longth;i++){
        cout<<i<<"->"<<array[i]<<endl;
}
}
int ordenamiento(int array[],const int longth){
    for(int i=0;i<longth;i++){
        int temp;
        for(int j=0;j<longth-1;j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1]=temp;
            }
        }
    }
   for(int i=0;i<longth;i++){
        cout<<i<<"->"<<array[i]<<endl;
}
}



int main()
{
    int x ;
    cout<<"Ingrese la dimension de su arreglo:";cin>>x;
    int arreglo[x];
    for(int i=0;i<x;i++){
        cout<<"Ingrese el digito:";cin>>arreglo[i];
    }
    cout<<"suma:"<<suma(arreglo,x)<<endl;
    cout<<"promedio:"<<promedio(arreglo,x)<<endl;
    cout<<"invertido:"<<invertir(arreglo,x)<<endl;
    cout<<"ordenamiento:"<<ordenamiento(arreglo,x)<<endl;
    return 0;

}



