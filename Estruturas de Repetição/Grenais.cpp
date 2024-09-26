#include <iostream>

using namespace std;

int main()
{
	//número de grenais.
	int ngrenais;
	// as variáveis vi e vg representam vitórias do Inter e do Grêmio, respectivamente.
	int vi;
	int vg;
	int empate;
	// as variáveis gi e gg representam gols marcados pelo Inter e pelo Grêmio, respectivamente.
	int gi;
	int gg;
	// os valores iniciais são nulos, pois serão somados após a leitura de gols e comparações entre estes.
	ngrenais = 0;
	vi = 0;
	vg = 0;
	empate = 0;
	int n;
	//n começa com valor igual a 1 porque este representa um novo grenal.
	n = 1;
	while (n == 1)
	{
		cin >> gi;
		cin >> gg;
		//número de grenal é somado a partir de cada partida nova jogada.
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
//se a pessoa escolher número 1, um novo grenal é criado.
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> n;
	}

	cout << ngrenais << " grenais" << endl;
	cout << "Inter:" << vi << endl;
	cout << "Gremio:" << vg << endl;
	cout << "Empates:" << empate << endl;
//comparação para decidir quem venceu mais ou se não houve vencedor em número de vitórias diante do número de partidas jogadas.
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
