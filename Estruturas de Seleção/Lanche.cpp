#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main ()
{
	
	int cod;
	int qtd;
    double preco;
	cin >> cod;
	cin >> qtd;

	if (cod == 1){
		preco = 4.00;
	}
	if (cod == 2) {
		preco = 4.50;
	}
	if (cod == 3) {
		preco = 5.00;
	}
	if (cod == 4) {
		preco = 2.00;
	}
	if (cod == 5) {
		preco = 1.50;
	}
	cout << fixed << setprecision(2);
	
	cout <<"Total: R$ " <<preco*qtd<<endl;
	
	return 0;
	
}