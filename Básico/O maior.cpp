#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, c;
	int maior_ab;
	cin >> a >> b >> c;
	
	maior_ab = ((a+b+abs(a-b))/2);

	if (maior_ab > c) {
		cout << maior_ab << " eh o maior" << endl;
	} else if (c > maior_ab) {
		cout << c << " eh o maior" << endl;
	}
	
	return 0;
}