#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
   system ("cls");
   
   int opcionProducto = 0;

    switch (opcion)
    {
         case 1:
     {
        cout << "*****************" << endl;
		cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1- Capuccino" << endl;
        cout << "2- Expresso" << endl;
        cout << "3- Chocolate Caliente" << endl;
        cout << endl;

         cout << "Ingrese una opcion:";
		 cin >> opcionProducto;

    switch(opcionProducto)
    {
        case 1:
           agregarProducto("1 Capuccino - L 40.00", 1, 40);
           break;
   
        case 2:
           agregarProducto("1 Expresso - L 30.00", 1, 30);
           break;
         
        case 3:
           agregarProducto("1 Chocolate Caliente - L 35.00", 1, 35);
           break;

     default:
        {
		 cout << "opcion no valida";
         return;
         break;
		}
    }
    
    cout << endl;
    cout << "Producto agregado" << endl << endl;
    system("pause");

    break;
     }

        case 2:
    {
        cout << "*************" << endl;
		cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1- Ice Coffee" << endl;
        cout << "2- Frozen Coffee Coolatta" << endl;
        cout << "3- Frozen Dunkaccino" << endl;
        cout << endl;
         
         cout << "Ingrese una opcion:";
		 cin >> opcionProducto;
         
         switch(opcionProducto)
    {
        case 1:
           agregarProducto("1 Ice Coffee - L 27.00", 1, 27);
           break;
   
        case 2:
           agregarProducto("1 Frozen Coffee Coolatta - L 37.00", 1, 37);
           break;
         
        case 3:
           agregarProducto("1 Frozen Dunkaccino - L 44.00", 1, 44);
           break;

     default:
        {
		 cout << "opcion no valida";
         return;
         break;
		}
    }
    
    cout << endl;
    cout << "Producto agregado" << endl << endl;
    system("pause");

    break;
        
    }
    
    case 3:
    {
        cout << "***********" << endl;
		cout << "RESPOSTERIA" << endl;
        cout << "***********" << endl;
        cout << "1- Dona De Chocolate" << endl;
        cout << "2- Muffin" << endl;
        cout << "3- Cinnamon Rolls" << endl;
        cout << endl;
         
         cout << "Ingrese una opcion:";
		 cin >> opcionProducto;
         
         switch(opcionProducto)
    {
        case 1:
           agregarProducto("1 Dona De Chocolate - L 20.00", 1, 20);
           break;
   
        case 2:
           agregarProducto("1 Muffin - L 25.00", 1, 25);
           break;
         
        case 3:
           agregarProducto("1 Cinnamon Rolls - L 28.00", 1, 28);
           break;

     default:
        {
		 cout << "opcion no valida";
         return;
         break;
		}
    }
    
    cout << endl;
    cout << "Producto agregado" << endl << endl;
    system("pause");

    break;
        
    }
    default:
    break;
    }
}
