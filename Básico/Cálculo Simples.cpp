#include <iostream>
#include <iomanip> 
 
using namespace std;
 
int main() {
 
    int cod1, cod2, n1, n2;
    double v1, v2;
    cin >> cod1 >> n1 >> v1;
    cin >> cod2 >> n2 >> v2;
    
    cout << fixed << setprecision(2);
    
    cout << "VALOR A PAGAR: R$ " << (1.0*n1*v1) + (1.0*n2*v2) << endl;
 
    return 0;
}