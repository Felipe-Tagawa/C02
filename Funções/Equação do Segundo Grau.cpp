#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float delta(float a, float b, float c) {
    return b * b - 4 * a * c;
}

int calc_raizes(float a, float b, float c, float &x1, float &x2) {
    float d = delta(a, b, c);
    
    if (d < 0 || a == 0) {
        // Não há raízes reais
        return 1;
    } else if (d == 0) {
        // Há uma única raiz real (raiz dupla)
        x1 = x2 = -b / (2 * a);
        return 0;
    } else {
        // Há duas raízes reais
        x1 = (-b - sqrt(d)) / (2 * a);
        x2 = (-b + sqrt(d)) / (2 * a);
        
        // Troca x1 e x2 se necessário
        float temp;
        if (x1 > x2) {
            temp = x1;
            x1 = x2;
            x2 = temp;
        }

        return 0;
    }
}

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    float x1, x2;
    int result = calc_raizes(a, b, c, x1, x2);

    if (result == 1) {
        cout << "Impossivel calcular" << endl;
    } else if (x1 == x2) {
        cout << "x = " << fixed << setprecision(5) << x1 << endl;
    } else {
        cout << "x1 = " << fixed << setprecision(5) << x1 << endl;
        cout << "x2 = " << fixed << setprecision(5) << x2 << endl;
    }

    return 0;
}
