#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeroSecreto = 7;
    int numero = 0;

    cout << "Ingrese un numero:   ";
    cin >> numero;

    cout << endl;

    if (numero ==numeroSecreto) {
        cout << "ADIVINASTE EL NUMERO SECRETO: " << numero;
    } else{
        cout << "NO ADIVINASTE:  " << numero;
    }
    


    return 0;
}
