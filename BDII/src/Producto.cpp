#include "Producto.h"

Producto::Producto(){
	this->codigo = " ";
	this->p_venta = " ";
	this->stock = " ";
}
/*
Producto::Producto(string algo){


	this->codigo = " ";
	this->p_venta = " ";
	this->stock = " ";
}
*/

string Producto::getCodigo(){return codigo;}
string Producto::getPventa(){return p_venta;}
string Producto::getStock(){return stock;}


void Producto::setCodigo(string codigo)
{
    a.askCodigo(string codigo);
    codigo = codigo;
}
void Producto::setPventa(string p_venta){this->p_venta = p_venta;}
void Producto::setStock(string stock){this->stock = stock;}



string Producto::askCodigo()
{
    string codigo;
    cout<<"Ingrese el codigo del Producto: ";
    cin>>codigo;
    setCodigo(codigo);
    return codigo;
}
string Producto::askPventa()
{
    string p_venta;
    cout<<"Ingrese el precio venta del Producto: ";
    cin>>p_venta;
    setPventa(p_venta);
    return stock;
}
string Producto::askStock()
{
    string stock;
    cout<<"Ingrese el stock del Producto: ";
    cin>>stock;
    setStock(stock);
    return stock;
}
