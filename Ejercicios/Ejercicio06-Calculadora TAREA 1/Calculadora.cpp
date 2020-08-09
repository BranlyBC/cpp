#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int a=0;
	int b=0;
	int suma=0, resta=0, multiplicacion=0, divicion=0;
	
	cout<<"Ingrese el primer numero:";
	cin>>a;
	
	cout<<"Ingrese el segundo numero:";
	cin>>b;
	
	suma = a + b;
	cout<<"\nLa suma es:"<< suma;
	
	resta = a - b;
	cout<<"\nLa resta es:"<< resta;
	
	multiplicacion = a * b;
	cout<<"\nLa multiplicacion es:"<< multiplicacion;
	
	divicion = a / b;
	cout<<"\nLa divicion es:"<< divicion;
	
	return 0;
}