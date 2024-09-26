#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n, mais = 0, menos = 0;
	double notas[100], soma = 0, media = 0;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> notas[i];
		soma += notas[i];
	}
	cout << fixed << setprecision(2);
	media = (float)soma / n;
	
	cout << "Media da turma: " << media << endl;
	
	for(int i = 0; i < n; i++) {
		if (notas[i] >= media) mais++;
		 else if(notas[i] < media) menos++;
	}
	
	cout << "Alunos com nota acima da media: " << mais << endl;
	cout << "Alunos com nota abaixo da media: " << menos << endl;

	return 0;
}
