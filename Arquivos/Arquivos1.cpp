#include <iostream>
#include <fstream> // leia do arquivo e escreva do arquivo.
using namespace std;

int main()
{
	ofstream arq; // handle( manipular) para escrever no arquivo, arq � um exemplo apenas.
	char nomearq[100]; // nome do arquivo.
	char nomefilme[100]; // nome do filme.
	int ano; // ano de lan�amento.
	// lendo nome do arquivo.
	cout << "nome do arquivo:" << endl;
	cin.getline(nomearq, 100);
	
	// abrindo arquivo para escrita.
	arq.open(nomearq, ofstream::out); // open liga a vari�vel ao arquivo.
	
	// lendo dados do filme
	cout << "Nome do Filme" << endl;
	cin.getline(nomefilme, 100);
	cout << "Ano:" << endl;
	cin >> ano;
	
	// escrevendo informa��es no arquivo.
	arq << nomefilme << endl;
	arq << ano << endl;
	
	// fechando o arquivo
	arq.close();
	
	return 0;
}