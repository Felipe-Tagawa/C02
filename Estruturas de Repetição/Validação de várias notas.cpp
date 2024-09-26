#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//duas variáveis que serão somadas.
	double x;
	double y;
	//variável relacionada à repetição dentro do do-while.
	int r;
	do
	{
		//lendo valores para x e y que serão utilizados na média.
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
		//se r for igual a 1, é repetido tudo dentro do do-while.
	}
	while (r == 1);


	return 0;
}
