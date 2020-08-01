#include <iostream>

using namespace std;

double subtotal;
double impuesto;
double total;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
	listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * 0.15;
    total = subtotal + impuesto;
}

void imprimirFactura()
{
	system("cls");
	cout << "*******" << endl;
	cout << "FACTURA" << endl;
	cout << "*******" << endl;
	cout << endl;
	
	cout << "Productos:" << endl;
	cout << listaProductos;
	
	cout << endl;
	cout << "Subtotal:" << subtotal << endl;
	cout << "Impuesto:" << impuesto << endl;
	cout << "Total:" << total << endl;
	cout << endl;
	cout << endl;
	system("pause");
	
}
© 20