#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//duas vari�veis que ser�o somadas.
	double x;
	double y;
	//vari�vel relacionada � repeti��o dentro do do-while.
	int r;
	do
	{
		//lendo valores para x e y que ser�o utilizados na m�dia.
		cin >> x;
		while (x < 0 || x > 10)
		{
			cout << "nota invalida" << endl;
			cin >> x;
		}
		cin >> y;
		while (y < 0 || y > 10)
		{
			cout << "nota invalida" << endl;
			cin >> y;
		}
		cout << fixed << setprecision(2);
		cout << "media = " << (x + y) / 2 << endl;
		cout << "novo calculo (1-sim 2-nao)" << endl;
		cin >> r;
		while (r != 1 && r != 2)
		{
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> r;
		}
		//se r for igual a 1, � repetido tudo dentro do do-while.
	}
	while (r == 1);


	return 0;
}
