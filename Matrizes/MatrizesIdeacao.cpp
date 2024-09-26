#include <iostream>
using namespace std;

int main()
{
	// necessidade de dois índices(uso de duas estruturas de repetição).
	int matriz [3][3];
	int i;
	int j;
	
	for(i = 0; i < 3 ; i++)
		for(j = 0; j < 3 ; j++)
			cin >> matriz [i][j];
			// para mostrar também são necessários duas estruturas de repetição.
	for(i = 0; i < 3 ; i++)
		for(j = 0; j < 3 ; j++)
			cout >> matriz [i][j] << " ";
		cout << endl; // para mostrar 3x3.
			
	return 0;
}