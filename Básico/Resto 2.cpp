#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    int i;
    cin >> n;
    
    for (i = 0; i < 10000; i++)
    {
      if(i % n == 2)
      {
          cout << i << endl;
      }
        
    }
    
    return 0;
}