#include <iostream>
#include <math.h>
#define pi 3.1416


using namespace std;

int main(int argc, char** argv)
{
	float numero = 0;
	float seno = 0;
	float coseno = 0;
	float tangente = 0;
	
	numero = 2*pi;
	seno = sin(numero);
	coseno = cos(numero);
	tangente = tan(numero);
	
	cout << "numero:" << numero << endl;
	cout << "seno:" << seno << endl;
	cout << "coseno:" << coseno << endl;
	cout << "tangente:" << tangente << endl;
	
	return 0;
}