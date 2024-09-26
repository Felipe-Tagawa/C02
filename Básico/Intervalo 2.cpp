#include <iostream>
 
using namespace std;
 
int main() {
 
   int n;
   int i;
   int valores;
   int in = 0;
   int out = 0;
   
   cin >> n;
   
   for ( i = 0; i < n; i++)
   {
       cin >> valores;
       if (valores >= 10 && valores <= 20)
       {
           in++;
       }
       else
       {
           out++;
       }
       
   }
   cout << in << " in" << endl;
    cout << out << " out" << endl;
   
    return 0;
}