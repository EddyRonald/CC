#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int filas1,columnas1,filas2,columnas2;
	
	cout<<"Matriz 1"<<endl;
	cout<<"Ingrese el numero de filas:";cin>>filas1;
	cout<<"Ingrese el numero de columnas:";cin>>columnas1;
	
	int matriz1[filas1][columnas1];
	
	for(int i=0;i<filas1;i++){
		for(int j=0;j<columnas1;j++){
			cout<<"Ingrese el digito ["<<i<<"]["<<j<<"]:";cin>>matriz1[i][j];
		}
	}

	cout<<endl;
	
	
	
cout<<"Matriz 2"<<endl;
	cout<<"Ingrese el numero de filas:";cin>>filas2;
	cout<<"Ingrese el numero de columnas:";cin>>columnas2;
	
	int matriz2[filas2][columnas2];
	
	for(int i=0;i<filas2;i++){
		for(int j=0;j<columnas2;j++){
			cout<<"Ingrese el digito ["<<i<<"]["<<j<<"]:";cin>>matriz2[i][j];
		}
	}
	
	

	if((filas1==filas2)&&(columnas1==columnas2)){
		for(int i=0;i<filas1;i++){
			for(int j=0;j<columnas2;j++){
			cout<<(matriz1[i][j])*(matriz2[j][i])<<endl;
			}
		}
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
