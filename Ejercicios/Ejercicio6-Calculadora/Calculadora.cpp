#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) {
	// Datos de Entrada
	int a = 0;
	int b = 0;
	int resultado = 0;
	
	cout << "Ingrese el valor de a: ";
	cin >> a;
	
	cout << endl;
	
	cout << "Ingrese el valor de b: ";
	cin >> b;
	
		// Proceso
	resultado = a+b;
	cout << endl;
    resultado = a-b;
    cout << endl;
    resultado = a*b;
	cout << endl;
    resultado = a/b;

    // Salida
	
	cout << endl;
	cout << " La suma de a + b es: " << resultado;
	cout << " La resta de a - b es:" << resultado;
    cout << " La multiplicacion de a * b es:" << resultado;
    cout << " La division de a / b es:" << resultado;
    


	return 0;
}