#include "DB.h"

DB::DB()
{
    ;//ctor
}

void DB::insertar(){
    Producto *temp;
    string STRING;
    cout<<"Que tipo de Producto desea insertar:";
    cin>>STRING;
     while(!archivo.eof()){                         //Pienso que este WHILE deberiamos ponerlo abajo
	        //getline(archivo,STRING);              //osea una vez creado el objeto leer todos sus elementos
	        switch (STRING[0]){                     //y agregarlos recien al txt ,pero nose como los voy a leer
	            case 'P':
	                temp= new Producto();
                    temp->askCodigo();
                    temp->askStock();
                    temp->askPventa();
                    string dato;
                    dato =temp->codigo+" "+temp->stock+" "+temp->p_venta;
                    archivo.open("productos.txt",ios::out);
                    while(!archivo.eof()){
                    getline(archivo,dato);
                    }
                    archivo.close();
                    break;
                /*case 'L':
                    temp= new Laptop(STRING);
                    break;
                case 'C':
                    temp = new Computer(STRING);
            }*/
     }
}
    productitos.push_back(*temp);
}
/*
void DB:seleccionar()
{

}
void DB::visualizar(){
    string STRING;
    archivo.open("productos.txt");
        while(!archivo.eof()){
	        getline(archivo,STRING);
	        cout<<STRING<<endl;
        }
	archivo.close();
}


 /*   string ingresados[3];
    string ingresar[3] = {"Ingrese el codigo", "Ingrese el precio de venta", "Ingrese el stock"};
        for(int i=0;i<3;i++){
        cout<<ingresar[i]<<endl;
        cin>>ingresados[i];
}
    cout<<" "<<endl;
    for(int a=0;a<3;a++){
        cout<<ingresados[a]<<endl;
    }
    */
