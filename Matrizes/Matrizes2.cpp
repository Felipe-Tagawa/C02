// Declara��o : [i][j], linhas e colunas.
// Atribui��o : int mat[3][5] --> mat[0][0] = 12.
#include <iostream>
using namespace std;

int main()
{
	int mat[2][3]; // dimens�es sempre n�meros.
	int nLinhas = 2; // #linhas
	int nColunas = 3; // ;#colunas
	int l, c; // contadores para as linhas e colunas.
	
	mat[0][0] = 12; mat[0][1] = 3; mat[0][2] = 7;
	mat[1][0] = 9; mat[1][1] = 24; mat[1][2] = 37;
	// Mostrando primeira linha --> linhas constante e colunas 0, 1 e 2.
	l = 0; // Linha constante 0.
	for(c = 0; c < nColunas; c++)
		cout << mat[l][c] << " ";
	cout << endl;
	// Mostrando segunda linha --> linhas constante e colunas 0, 1 e 2.
	l = 1; // Linha constante 1.
	for(c = 0; c < nColunas; c++)
		cout << mat[l][c] << " ";
	cout << endl;
	// Mostrando a matriz por linhas.
	for(l = 0; l < nLinhas; l++);
		{
		for(c = 0; c < nColunas; c++)
			cout << mat[l][c] << " ";
		cout << endl;
		}
	
	return 0;
	
}