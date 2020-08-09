#include <iostream>
#include "factura.h"

using namespace std;


void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:

        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << "3 - Cafe Americano" << endl;
        cout << "4 - Moka (white or dark)" << endl;
        cout << endl;
        
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
        cout << endl;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L. 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Expresso - L. 30.00", 1, 30);
            break;
        case 3:
            agregarProducto("1 Cafe Americano - L. 28.00", 1, 28);
            break;
        case 4:
            agregarProducto("1 Moka (white or dark) - L. 43.00", 1, 43);
            break;
        
        default:
        {
            cout << "Opcion no valida!" << endl;
            return;
            break;
        }
        
        }

        cout << endl;
        cout << "Producto  agregado" << endl << endl;
        system("pause");
 
        break;
    case 2:
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Te helado" << endl;
        cout << "2 - Refrescos" << endl;
        cout << "3 - Frappes Tradicionales" << endl;
        cout << "4 - Smoothies" << endl;
        cout << endl;
        
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
        cout << endl;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Te helado - L. 45.00", 1, 45);
            break;
        case 2:
            agregarProducto("1 Refrescos - L. 25.00", 1, 25);
            break;
        case 3:
            agregarProducto("1 Frappes Tradicionales - L. 55.00", 1, 55);
            break;
        case 4:
            agregarProducto("1 Smoothies - L. 55.00", 1, 55);
            break;
        
        default:
        {
            cout << "Opcion no valida!" << endl;
            return;
            break;
        }
        
        }

        cout << endl;
        cout << "Producto  agregado" << endl << endl;
        system("pause");
 
        break;
    case 3:
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "*****************" << endl;
        cout << "1 - Green lemon cake" << endl;
        cout << "2 - Banana and vanilla" << endl;
        cout << "3 - Coconut cake" << endl;
        cout << "4 - Checkerboard cake" << endl;
        cout << endl;
        
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
        cout << endl;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Green lemon cake - L. 96.00", 1, 96);
            break;
        case 2:
            agregarProducto("1 Banana and vanilla - L. 216.00", 1, 216);
            break;
        case 3:
            agregarProducto("1 Coconut cake - L. 144.00", 1, 144);
            break;
        case 4:
            agregarProducto("1 Checkerboard cake - L. 192.00", 1, 192);
            break;
        
        default:
        {
            cout << "Opcion no valida!" << endl;
            return;
            break;
        }
        
        }

        cout << endl;
        cout << "Producto  agregado" << endl << endl;
        system("pause");
 
        break;
    }
}