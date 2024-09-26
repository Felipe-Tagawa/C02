#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double soma;
    int i;
    soma = 0.0;

    cout << "Digite o valor de N: ";
    cin >> n;

    for ( i = 1; i <= n; i++)
	 {
        soma = soma + (1.0 / i);
    }

    cout << fixed << setprecision(4);
    cout << soma << endl;

    return 0;
}
