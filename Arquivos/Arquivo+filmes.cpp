#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream arq; // handle para ler o arquivo.
	char nomearq[100]; // nome do arquivo onde est�o salvos os dados.
	char nomefilme[100]; // nome do filme.
	int ano; // ano de lan�amento.
	
	// lendo nome do arquivo
	cin.getline(nomearq, 100);
	// abrindo o arquivo para leitura
	arq.open(nomearq, ifstream::in);
	
	while(!arq.eof())
	{
		// lendo dados do arquivo.
	arq.getline(nomefilme, 100);
	arq >> ano;
	arq.ignore();
	// mostrando as informa��es.
	cout << "filme: " << nomefilme << endl;
	cout << "Ano:" << ano << endl;
	}
	// fechando o arquivo.
	arq.close();
	
	return 0;
}