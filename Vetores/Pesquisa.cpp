#include <iostream>
using namespace std;

int main()
{
	int valores[99];
	int x;
	int i;
	i = 0;
	int y;
	int j;
	int aux  = 0;
	int posicao;

	cin >> valores[i];

	while (valores[i] != 0)
	{
		i++;
		cin >> valores[i];

	}
	cin >> x;
	for(j = 0; j < i ; j++)
	{
		if (x == valores[j])
		{
			aux = 1;
			posicao = j;
		}
		
	}
if (aux == 1)
	cout << "Elemento " << x << " encontrado na posicao " << posicao << endl;
else
{
	cout << "Elemento " << x << " nao foi encontrado " << endl;
}

	return 0;
}
