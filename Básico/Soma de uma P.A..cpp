#include <iostream>
using namespace std;

int main() {
  int a, r, n, soma = 0;

  // Pedindo ao usu�rio para inserir os valores de a, r e n.
  cout << "Insira o primeiro termo (a): ";
  cin >> a;
  cout << "Insira a raz�o (r): ";
  cin >> r;
  cout << "Insira o n�mero de termos (n): ";
  cin >> n;

  // Calculando a soma da PA usando um loop do-while.
  int i = 0;
  do {
    soma += a;
    a += r;
    i++;
  } while (i < n);
  cout << "A soma da PA �: " << soma << endl;

  return 0;
}
