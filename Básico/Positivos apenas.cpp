#include <iostream>
 
using namespace std;
 
int main() {
 
   double x;
   int i;
   int positivos;
   positivos = 0;
   
   while(x != -1)
   {
   	i++;
   	cin >> x;
	if(x > 0)
		positivos++;
   }
   cout << positivos << " valores positivos" << endl;
   
    return 0;
}