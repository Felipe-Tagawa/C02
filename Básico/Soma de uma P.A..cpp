#include <iostream>
using namespace std;

int main() {
  int a, r, n, soma = 0;

  // Pedindo ao usuário para inserir os valores de a, r e n.
  cout << "Insira o primeiro termo (a): ";
  cin >> a;
  cout << "Insira a razão (r): ";
  cin >> r;
  cout << "Insira o número de termos (n): ";
  cin >> n;

  // Calculando a soma da PA usando um loop do-while.
  int i = 0;
  do {
    soma += a;
    a += r;
    i++;
  } while (i < n);
  cout << "A soma da PA é: " << soma << endl;

  return 0;
}
