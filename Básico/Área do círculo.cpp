#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    cout << fixed << setprecision(4);
 
   double r;
   cin >> r;
   cout << "A=" <<3.14159*(r*r)<<endl;
    return 0;
}