#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    char nome[20];
    double fixo;
    double montante;
    
    cin.getline(nome, 20);
    cin >> fixo;
    cin >> montante;
    
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << 1.0*fixo + (0.15*montante) << endl; 
 
    return 0;
}