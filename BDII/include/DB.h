#ifndef DB_H
#define DB_H
#include "Producto.h"
#include "Ask.h"
#include <vector>
#include <string>
#include<fstream>

class DB{
public:
    DB();
    vector<Producto> productitos;
    fstream archivo;
    string ingresar[3] = {"Ingrese el codigo", "Ingrese el precio de venta", "Ingrese el stock"};
    string ingresados[3];
    void insertar();
    /*void seleccionar();
    void eliminar();
    void actualizar();
    void visualizar();
    void consultar();*/

};

#endif // DB_H
