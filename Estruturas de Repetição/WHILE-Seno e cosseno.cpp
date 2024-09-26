#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double n1, n2;
    cin >> n1 >> n2;

    bool intervalo_encontrado = false;
    double inicio_intervalo = 0.0, fim_intervalo = 0.0;

    double theta = n1;
    while (theta <= n2) {
        double resultado = sin(theta) * cos(theta);
        if (resultado > 0) {
            // If apenas pra marcar o in�cio do intervalo, depois s� itera sobre o fim do intervalo.
            if (!intervalo_encontrado) { // Come�a falso, quando vira verdadeiro depois,e por fim fica falso novamente.
                inicio_intervalo = theta; // S� faz isso uma vez.
                intervalo_encontrado = true;
            }
            fim_intervalo = theta; // Itera at� que o resultado seja negativo ou 0.
        }
        theta += 0.1;
    }

    if (intervalo_encontrado) {
        cout << fixed << setprecision(1);
        cout << inicio_intervalo << " a " << fim_intervalo << endl;
    } else {
        cout << "Nenhum intervalo encontrado." << endl;
    }

    return 0;
}
