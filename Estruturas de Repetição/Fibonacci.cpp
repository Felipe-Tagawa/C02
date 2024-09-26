#include <iostream>
using namespace std;

int main ()
{
	int n, i, penultimo = 0, ultimo = 1, proximo;
	//lendo um valor qualquer de n que indica quantos valores serão mostrados.
	cin >> n;

	for (i = 0; i < n; i++)
	{
		//se os valores de i forem 1 ou 2, os primeiros 2 números(0 e 1) são computados.
		if (i == 0)
		{
			cout << penultimo << " ";
		}
		else if (i == 1)
		{
			cout << ultimo << " ";
		}
		
		else
		{
			proximo = penultimo + ultimo;
			//swap:
			penultimo = ultimo;
			ultimo = proximo;
			cout << proximo << " ";
		}
	}

	return 0;
}
