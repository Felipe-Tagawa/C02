#include <iostream>
#include <iomanip> // biblioteca para acréscimo de casas decimais
using namespace std;

int main()
{
	int n; // numero de casos
	int i; // contador
	int x[99]; // vetor 1 de inteiros
	int y[99]; // vetor 2 de inteiros
	char op[99]; // vetor 3 de caracteres
	double z[99]; // vetor com valores reais de resultado

	cin >> n; // lendo o numero de casos

	for (i = 0; i < n; i++ ) // ler o primeiro vetor por completo
		cin >> x[i];

	for(i = 0; i < n; i++) // ler o segundo vetor por completo
		cin >> y[i];

	for (i = 0; i < n; i++) // ler o terceiro vetor de caracteres
		cin >> op[i];

	for ( i = 0; i < n; i++)
	{
		switch(op[i]) // casos específicos para cada caractere matemático
		{
		case '*' : // multiplicação
			z[i] = x[i] * y[i];
			cout << x[i] << " * " << y[i] << " = " << z[i] << endl;
			break;
		case '+' : // soma
			z[i] = x[i] + y[i];
			cout << x[i] << " + " << y[i] << " = " << z[i] << endl;
			break;
		case '-' : // subtração
			z[i] = x[i] - y[i];
			cout << x[i] << " - " << y[i] << " = " << z[i] << endl;
			break;
		case '/' : // divisão
			z[i] = (float)x[i] / y[i];
			cout << fixed << setprecision(2); // 2 casas decimais para divisão de inteiros
			cout << x[i] << " / " << y[i] << " = " << z[i] << endl;
			break;
		}
	}


	return 0;
}
