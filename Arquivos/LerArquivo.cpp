#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream arq; // handle para ler o arquivo.
	char nomearq[100]; // nome do arquivo onde estão salvos os dados.
	char nomefilme[100]; // nome do filme.
	int ano; // ano de lançamento.
	
	// lendo nome do arquivo
	cin.getline(nomearq, 100);
	// abrindo o arquivo para leitura
	arq.open(nomearq, ifstream::in);
	// lendo dados do arquivo.
	arq.getline(nomefilme, 100);
	arq >> ano;
	
	// mostrando as informações.
	cout << "filme: " << nomefilme << endl;
	cout << "Ano:" << ano << endl;
	
	return 0;
}