// Declaração : [i][j], linhas e colunas.
// Atribuição : int mat[3][5] --> mat[0][0] = 12.
#include <iostream>
using namespace std;

int main()
{
	int mat[2][3]; // dimensões sempre números.
	int nLinhas = 2; // #linhas
	int nColunas = 3; // ;#colunas
	int l, c; // contadores para as linhas e colunas.
	
	mat[0][0] = 12;
    mat[0][1] = 3;
    mat[0][2] = 7;
	mat[1][0] = 9; 
	mat[1][1] = 24; 
	mat[1][2] = 37;
	
	// Mostrando a matriz Transposta.
	for(c = 0; c < nColunas; c++)
	{
		
		for(l = 0; l < nLinhas; l++)
			cout << mat[l][c] << " ";
		cout << endl;
	}
	
	return 0;
	
}