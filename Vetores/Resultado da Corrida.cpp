#include <iostream>
using namespace std;

int main(){
	
	float corredores[15];
	int pos, i = 0;
	
	while(cin >> corredores[i] && corredores[i] != -1){
		i++;
	}
	
	int n = i;
	
	for(i = 0; i < n; i++){
		float menor_tempo = 9999;
		for(int j = 0; j < n; j++){
			if(corredores[j] < menor_tempo){
				menor_tempo = corredores[j];
				pos = j;
			}
		}
		cout << pos << endl;
		corredores[pos] = 9999;
	}
	
	return 0;
}