#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double a;
    double b;
    double c;
    
    cin >> a >> b >> c;
    
    cout << fixed << setprecision(1);
    if((a + b) > c && (b + c) > a && (a + c) > b)
    {
        cout << "Perimetro = " << a+b+c << endl;
    }
    else
    {
        cout << "Area = " << ((a+b)*c)/2.0 << endl;
    }
 
    return 0;
}