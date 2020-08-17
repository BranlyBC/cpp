#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

int suma = 0;	
int matriz[5][5] = 
{
	{10, 10, 10, 10, 10}, 
    {10, 10, 10, 10, 10}, 
    {10, 10, 10, 10, 10},
    {10, 10, 10, 10, 10}, 
    {10, 10, 10, 10, 10}
};

for ( int i = 0; i < 5; i++ )
{
  for ( int j = 0; j < 5; j++ )
  {
  	suma = suma + matriz[i][j];
  }
  
  cout << suma;
}

return 0;
}