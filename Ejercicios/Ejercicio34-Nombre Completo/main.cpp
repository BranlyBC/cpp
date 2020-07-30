#include <iostream>

using namespace std;

string nombrecompleto(string nombre, string apellido) 
{
	return nombre + " " + apellido;
}

int main(int argc, char** argv) {
	
	string primernombre = "";
	string primerapellido = "";
	
	cout << "Ingrese su primer nombre:";
	cin >> primernombre;
		cout << "Ingrese su primer apellido:";
	cin >> primerapellido;
	
	cout << endl;
	
	cout << "Nombre completo:" << nombrecompleto(primernombre, primerapellido);
	
	
	return 0;
}