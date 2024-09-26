#include <iostream>
using namespace std;

int main()
{
    int mat[3][3];
    int n; // número de linhas.
    int m; // número de colunas.
    int i; // contador das linhas.
    int j; // contador das colunas.
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        cin >> mat[i][j];
    }
    for(i = 0; i < n; i++)
    {
    	for(j = 0;j < m ;j++)
		{
        if(mat[0][0] == 1 && mat[0][1] == 1 && mat[0][2] == 1 && mat[1][0] == 0 && mat[1][1] == 1 && mat[1][2] == 0 && mat[2][0] == 0 && mat[2][1] == 0 && mat[2][2] == 1)
		{
   	  cout << "MASCULINO" << endl;
		}
    
     else if(mat[0][0] == 1 && mat[0][1] == 0 && mat[0][2] == 0 && mat[1][0] == 1 && mat[1][1] == 1 && mat[1][2] == 0 && mat[2][0] == 1 && mat[2][1] == 0 && mat[2][2] == 0)
	 {
        cout << "FEMININO" << endl;
	 }
		}
	}
    return 0;
}