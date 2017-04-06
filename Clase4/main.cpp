#include <iostream>

using namespace std;

int main()
{
   int x;
   cout<<"Ingrese la cantidad:";cin>>x;
   for(int i=2;i<x;i++){
        int a=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                a++;
            }
        }
        if(a==2){
             cout<<i<<" "<<endl;
        }
   }
   return 0;
}
