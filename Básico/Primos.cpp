#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    int divisores = 0;
    
    cin >> n;

    while (i <= n) {
        if (n % i == 0) {
            divisores++;
        }
        
        i++;
    }

    if (divisores == 2) {
        cout << "primo" << endl;
    } else {
        cout << "nao e primo" << endl;
    }

    return 0;
}
