#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;
	
	cout << "ingrese la nota que obtuvo:";
	cin >> nota;
	

	if (nota >= 95 && nota <= 100){
		cout << "obtuviste una A";
	} else {
 	     if (nota >= 85 && nota <= 94){
		     cout << "obtuviste una B";
	    } else {
	         if (nota >= 75 && nota <= 84){
		         cout << "obtuviste una C";
	        } else {
	             if (nota >= 65 && nota <= 74){
		             cout << "obtuviste una D";
	            } else {
	                 if (nota >= 60 && nota <= 64){
		                 cout << "obtuviste una E";
	                } else {
                     	if (nota >=0 && nota <= 60){
		                     cout << "obtuviste una F";
	                    } else {
	                        cout << "Ingrese una nota entre 0 - 100";

                         }
                     }
                 }
             }
         }    
	 }
	return 0;
}
