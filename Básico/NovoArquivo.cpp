#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
 
   int n;
   int i = 0;
   
   cin >> n;
   
   for(i = 0; i < n; i++)
   {
       if(i % 2 == 0)
         cout << i << "^2 = " << pow(i, 2) << endl;
       
   }
 
    return 0;
}