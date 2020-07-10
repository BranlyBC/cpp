#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

int main(int argc, char** argv) {
	
   // DATOS DE ENTRADA	

   int A = 0;
   int B = 0;
   int resultado = 0;
   
   cout << "Ingrese el valor de A:  ";
   cin >> A;
   
   cout << endl;
   
   cout << "Ingrese el valor de B:  ";
    cin >> B;


   //PROCESO

    resultado = A+B;

    // SALIDA
    cout << endl;
    cout << "La suma de A + B es:" <<resultado;

	
	return 0;
}
