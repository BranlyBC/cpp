#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	
	char estaExenta;
	double subtotal = 0;
	double total = 0;
	double impuesto = 0.15;
	int descuento = 0;
	double calculodescuento = 0;
	double calculoimpuesto = 0;
	
	cout <<"Ingrese el subtotal de la factura:";
	      cin >> subtotal;
	
	cout << "Ingrese el descuento (0, 10, 15, 20)";
	      cin >> descuento;
	
	cout << "Es factura exenta escriba S o N:";
	     cin >> estaExenta;
	
	if (estaExenta == 's' || estaExenta == 'S')
	{   
	     calculoimpuesto = 0;
	          cout << endl;
	          cout << "Total a pagar:" << total;
	} 
	else
	{
	if (estaExenta == 'n' || estaExenta == 'N')
	{
	     calculoimpuesto = (subtotal - calculodescuento) * 0.15;
	}
	     calculodescuento = (subtotal * descuento) / 100;
	     total= subtotal - calculodescuento + calculoimpuesto;
	
	cout << endl;
	cout << "Total a pagar:" << total;
	
	}
	return 0;
}
