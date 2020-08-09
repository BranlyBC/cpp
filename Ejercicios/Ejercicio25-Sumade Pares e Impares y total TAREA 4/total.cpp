#include <iostream>

using namespace std;
int main(int argc, char** argv) {

int pares = 0;
int total = 0;
int impares = 0;

for (int i = 1; i <= 10; i++)
{
    cout << i << " ";
    
    if (i % 2 == 0)
{
    pares += i;
}
else

    impares += i;

    total = pares + impares;

}
cout << endl;
cout << "\nTotal pares:" << pares;
cout << endl;
cout << "\nTotal impares:" << impares;
cout << endl;
cout << "\nTotal:" << total;

return 0;
}