#include <iostream>

using namespace std;

int main()
{
	//n�mero de grenais.
	int ngrenais;
	// as vari�veis vi e vg representam vit�rias do Inter e do Gr�mio, respectivamente.
	int vi;
	int vg;
	int empate;
	// as vari�veis gi e gg representam gols marcados pelo Inter e pelo Gr�mio, respectivamente.
	int gi;
	int gg;
	// os valores iniciais s�o nulos, pois ser�o somados ap�s a leitura de gols e compara��es entre estes.
	ngrenais = 0;
	vi = 0;
	vg = 0;
	empate = 0;
	int n;
	//n come�a com valor igual a 1 porque este representa um novo grenal.
	n = 1;
	while (n == 1)
	{
		cin >> gi;
		cin >> gg;
		//n�mero de grenal � somado a partir de cada partida nova jogada.
		ngrenais++;
		if (gi > gg)
		{
			vi++;
		}
		else if (gg > gi)
		{
			vg++;
		}
		else
		{
			empate++;
		}
//se a pessoa escolher n�mero 1, um novo grenal � criado.
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> n;
	}

	cout << ngrenais << " grenais" << endl;
	cout << "Inter:" << vi << endl;
	cout << "Gremio:" << vg << endl;
	cout << "Empates:" << empate << endl;
//compara��o para decidir quem venceu mais ou se n�o houve vencedor em n�mero de vit�rias diante do n�mero de partidas jogadas.
	if (vi > vg)
	{
		cout << "Inter venceu mais" << endl;
	}
	else if (vg > vi)
	{
		cout << "Gremio venceu mais" << endl;
	}
	else
	{
		cout << "Nao houve vencedor" << endl;
	}

	return 0;
}
