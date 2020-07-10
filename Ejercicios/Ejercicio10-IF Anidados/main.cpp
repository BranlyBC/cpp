#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int a = 1000;
	int b = 5000; 
	int c = 7000;

    
    if (a > b)
    {
        if (a > c)
        {
            cout << "A es mayor" << endl;
        } else
        {
            cout << "C es mayor" << endl;
        }  
        
    } else
    {
        if (b > c)
        {
            cout << "B es mayor" << endl;
        } else
        {
            cout << "C es mayor" << endl;
        } 
    }
   

 
    return 0;
}
