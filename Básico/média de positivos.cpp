#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	double x;
	int i;
	int positivos;
	double media;
	positivos = 0;
	double soma;
	soma = 0;

	for (i = 0; i < 6; i++)
	{
		cin >> x;
		if (x > 0)
			positivos++;
		soma = soma + x;
	}
	cout << positivos << " valores positivos" << endl;
	media = soma / positivos;
	cout << fixed << setprecision(2);
	cout << media << endl;

	return 0;
}
