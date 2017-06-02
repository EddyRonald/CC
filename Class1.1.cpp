#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>

using namespace std;

class Avion{
	public:
		virtual void mensaje()=0;
};


class Avioneta:public Avion
{
	public:
		void mensaje(){
			cout<<"Avioneta:vuelo 1030"<<endl;
		}
};

class Aeroplano:public Avion{

	public:
		void mensaje(){
			cout<<"Aeroplano:vuelo 102"<<endl;
		}
};


class torre{
	public:
	vector< Avion*>avioncito;
	torre(){};
	void agregar(Avioneta x){
		avioncito.push_back(&x);
		/*x.mensaje();*/
	}
	void agregar(Aeroplano x){
		avioncito.push_back(&x);
		/*x.mensaje();*/
	}
	
	void comunicacion(){
		for(int i=0;i<avioncito.size();i++){
			avioncito[i]->mensaje();
		}
	}
		
	 
};


int main(){
	Avioneta p1;
	Aeroplano p2;
	
	torre T;
	T.agregar(p1);
	T.agregar(p2);
	T.comunicacion();
	

	
}
