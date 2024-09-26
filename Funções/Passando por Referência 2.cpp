#include <iostream>
#include <iomanip>
using namespace std;

void converte(float f, float &c, float &k){
    
    c = (f - 32)*5/9;
    k = c + 273;
    
}

int main(){
    
    float f, c, k;
    
    cin >> f;
    
    converte(f, c, k);
    
    cout << fixed << setprecision(2);
    cout << "Celsius: " << c << endl;
    cout << "Kelvin: " << k << endl;
    
    return 0;
}