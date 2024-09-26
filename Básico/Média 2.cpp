#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {

    double a;
    double b;
    double c;
    cin >> a;
    cin >> b;
    cin >> c;
    
    cout << fixed << setprecicion(1);
    cout <<"MEDIA = "<<(a*2+b*3+c*5)/10;
 
    return 0;
}