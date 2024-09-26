#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	int i;
	int valores;
	int positivos;
	double soma;
	double media;
	positivos = 0;
	soma = 0;
	for (i = 0; i < 6; i++)
	{
		cin >> valores;
		if (valores > 0)
			positivos++;
		soma = soma + valores;
	}
	media = soma / positivos;
	cout << positivos << " valores positivos" << endl;
	cout << fixed << setprecision(1) << media << endl;

	return 0;
}
