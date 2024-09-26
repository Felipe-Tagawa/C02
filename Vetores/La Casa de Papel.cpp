#include <iostream>
using namespace std;

int main() {
	int n, valores[50], like = 0, dislike = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
	    
		cin >> valores[i];
		if (valores[i] == 1) like++;
		else if (valores[i] == -1) dislike++;

	}
	
	if(like > dislike)
		cout << "A maioria gostou" << endl; else if(like < dislike)
		cout << "A maioria nao gostou" << endl; else
		cout << "Deu empate" << endl;
		
	return 0;
}
