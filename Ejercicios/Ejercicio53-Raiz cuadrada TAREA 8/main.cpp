#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
	float a = 0;
	float Resultado = 0;
	
	cout << "Ingrese el valor de a: ";
	cin >> a;
	
	Resultado = sqrt(a);
	
	cout << endl;
	
	cout << "La Raiz Cuadrada es: " << Resultado << endl;
	
	return 0;
}