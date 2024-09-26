#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
 double x1;
 double y1;
 double x2;
 double y2;
 
 cin>>x1;
 cin>>y1;
 cin>>x2;
 cin>>y2;
 
 cout << fixed << setprecision (4);
 
 cout <<sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)))<<endl;
    
 
    return 0;
}