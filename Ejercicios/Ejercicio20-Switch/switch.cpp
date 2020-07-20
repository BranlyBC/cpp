#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    cout << "Ingrese una Opcion";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
    {
        cout << "Escogiste Ops 1 " << endl;
        cout << "Segunda Linea Opcion 1"
        break;
    }

    case 2:
        cout << "Escogiste Ops 2 " << endl;
        break;

     case 3:
        cout << "Escogiste Ops 3 " << endl;
        break;
    
    default:
        cout << "Ingrese una Opcion ente 1 y 3 " << endl;
        break;
    }








    return 0;
}
