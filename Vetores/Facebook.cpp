#include <iostream>
using namespace std;

int main() {
	int n[999], i,  N, maior, menor;
	maior = -1;
	menor = 10000;
	cin >> N;

	for (i = 0; i < N; i++) {
		cin >> n[i];

		if(n[i] < menor) {
			menor = n[i];
		}


		else if(n[i] > maior) {
			maior = n[i];

		}
	}
	cout << "Menor numero de contatos: " << menor << endl;
	cout << "Maior numero de contatos: " << maior << endl;
	return 0;
}
