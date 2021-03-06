// EXAMEN MATRIX 26 DE JULIO 

#include <iostream>
using namespace std;
 

int Modulus(int iN, int iMod) {
    int iQ = (iN/iMod);
    return iN - (iQ*iMod);
}
 

char GetChar(int iGenerator, char cBase, int iRange) {
    return (cBase + Modulus(iGenerator, iRange));
}
 

int main() {
    string contrasena;
    
    cout << "Eres un agente? ingresa tu password para acceder a la matrix: ";
    cin >> contrasena;

       //proceso de contraseña 1 (smith)
    
    if (contrasena == "smith") {
        system("COLOR 02");
 

        char caRow[80];
        int j = 7;
        int k = 2;
        int l = 5;
        int m = 1;
        int ciclos = 0;
 

        while (true) {
            int i = 0;
            
            //  SMITH CARACTERES
            while (i < 80) {
                if (caRow[i] != ' ') {
                    caRow[i] = GetChar(j + i*i, 33, 30);
                    cout << caRow[i];
                }
                
                ++i;
            }
            j = (j + 31);
            k = (k + 17);
            l = (l + 47);
            m = (m + 67);
            caRow[Modulus(j, 80)] = '-';
            caRow[Modulus(k, 80)] = ' ';
            caRow[Modulus(l, 80)] = '-';
            caRow[Modulus(m, 80)] = ' ';
            
            i = 0;
            while (i < 3000) {
                GetChar(1, 1, 1);
                 ++i;
            }
             // no verdadero proceso para error 

            cout << "*** EL SISTEMA FALLO ***";
            ciclos++;
        }       

              //proceso de contraseña 2 (neo)    
 
        
    } else if (contrasena == "neo"){
        system("COLOR 02");

        char caRow[80];
        int j = 7;
        int k = 2;
        int l = 5;
        int m = 1;
        int ciclos = 0;
 

        while (ciclos < 80) {
            
            int i = 0;
             
                // NEO CARACTERES 
            while (i < 80) {
                if (caRow[i] != ' ') {
                    caRow[i] = GetChar(j + i*i, 33, 30);
                    cout << caRow[i];
                }
                
                ++i;
            }
            j = (j + 31);
            k = (k + 17);
            l = (l + 47);
            m = (m + 67);
            caRow[Modulus(j, 80)] = '-';
            caRow[Modulus(k, 80)] = ' ';
            caRow[Modulus(l, 80)] = '-';
            caRow[Modulus(m, 80)] = ' ';
            
            i = 0;
            while (i < 3000) {
                GetChar(1, 1, 1);
                 ++i;
            }
            
          // no verdadero proceso para error 

            ciclos++;
        }
        system("COLOR 04");

        cout << endl;
        cout << endl;
        cout << "*** EL SISTEMA FALLO***";
        cout << endl;
        cout << endl;
   
    } 

    else {
        cout << endl;
        cout << "***Contraseña Incorrecta***";
        cout << endl;
    }


    return 0;
}