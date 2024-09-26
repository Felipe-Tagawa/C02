#include <iostream>
using namespace std;

int main ()
{
	//vari�veis i e n em raz�o de for.
	int n;
	int i;
	//as vari�veis ultimo e pen�ltimo sao referentes ao primeiro valor e ao segundo que ser�o somados.
	int penultimo;
	penultimo = 0;
	int ultimo;
	ultimo = 1;
	//a vari�vel proximo corresponde ao valor da soma de ultimo com penultimo.
	int proximo;
	//lendo um valor qualquer de n que indica quantos valores ser�o mostrados.
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		//se os valores de i forem 1 ou 2, os primeiros 2 n�meros(0 e 1) s�o computados.
		if (i == 1)
		{
			cout << penultimo << endl;
		}
		else if (i == 2)
		{
			cout << ultimo << endl;
		}
		
		else
		{
			//a express�o seguinte mostra que valores ser�o armazenados ap�s a soma de penultimo com ultimo.
			proximo = penultimo + ultimo;
			//o valor subsequente se torna o seguinte a partir da soma anterior.
			penultimo = ultimo;
			ultimo = proximo;
			//os valores ser�o computados, j� que foram armazenados em "proximo".
			cout << proximo << endl;
		}
	}

	return 0;
}
