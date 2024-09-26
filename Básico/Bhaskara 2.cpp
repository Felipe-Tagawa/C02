#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    double a;
    double b;
    double c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(5);
if (a !=0 && (b*b-4*a*c) >= 0){
cout << "R1 = " << (-b+sqrt(b*b-4*a*c))/(2*a)<<endl;
cout << "R2 = " << (-b-sqrt(b*b-4*a*c))/(2*a)<<endl;}

else{
cout << "Impossivel calcular" << endl;}


    return 0;
}