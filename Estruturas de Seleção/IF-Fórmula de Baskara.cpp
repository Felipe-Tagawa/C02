#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    double A;
    double B;
    double C;
    double delta;
    
    cin >> A;
    cin >> B;
    cin >> C;
    
     cout << fixed << setprecision(5);
    delta = pow(B,2) - (4*A*C);
 
    
    if (delta >=0 && A!= 0){
    cout <<"R1 = "<< (-B + sqrt(delta))/ (2*A)<<endl;
    cout <<"R2 = "<< (-B - sqrt(delta))/ (2*A)<<endl;
	}else 
    cout <<"Impossivel calcular"<<endl;
    return 0;
}