#include <iostream>
using namespace std;

int main ()
{
	//variáveis i e n em razão de for.
	int n;
	int i;
	//as variáveis ultimo e penúltimo sao referentes ao primeiro valor e ao segundo que serão somados.
	int penultimo;
	penultimo = 0;
	int ultimo;
	ultimo = 1;
	//a variável proximo corresponde ao valor da soma de ultimo com penultimo.
	int proximo;
	//lendo um valor qualquer de n que indica quantos valores serão mostrados.
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		//se os valores de i forem 1 ou 2, os primeiros 2 números(0 e 1) são computados.
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
			//a expressão seguinte mostra que valores serão armazenados após a soma de penultimo com ultimo.
			proximo = penultimo + ultimo;
			//o valor subsequente se torna o seguinte a partir da soma anterior.
			penultimo = ultimo;
			ultimo = proximo;
			//os valores serão computados, já que foram armazenados em "proximo".
			cout << proximo << endl;
		}
	}

	return 0;
}
