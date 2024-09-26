#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x = -1, y = -1; 

    while (x < 0 || x > 10) {
        cin >> x;
        if (x < 0 || x > 10) {
            cout << "nota invalida" << endl; 
        }
    }

    while (y < 0 || y > 10) {
        cin >> y;
        if (y < 0 || y > 10) {
            cout << "nota invalida" << endl; 
        }
    }

    cout << fixed << setprecision(2);
    cout << "media = " << (x + y) / 2 << endl;

    return 0;
}