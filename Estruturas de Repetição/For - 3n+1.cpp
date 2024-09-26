#include <iostream>
using namespace std;

int main() {
    int i, j, aux;
    cin >> i >> j;

    int menor = i, maior = j;
    if (i > j) {
        menor = j;
        maior = i;
    }

    int maiorComprimento = -1;
    for (int num = menor; num <= maior; num++) {
        int comprimento = 1;
        aux = num;
        while (aux != 1) { // Quando for 1 acaba.
            if (aux % 2 == 0) {
                aux /= 2;
            } else {
                aux = 3 * aux + 1;
            }
            comprimento++;
        }
        if (comprimento > maiorComprimento) {
            maiorComprimento = comprimento;
        }
    }

    cout << i << " " << j << " " << maiorComprimento << endl;

    return 0;
}

