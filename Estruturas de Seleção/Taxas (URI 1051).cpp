#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
   double renda;
   cin >> renda;
   cout << fixed << setprecision(2);
   
   if (renda <= 2000){
        cout<<"Isento\n";
   }
   else if (2000 < renda && renda <= 3000){
        cout <<"R$ "<< (renda - 2000)*0.08<<endl;
   }
   else if (3000 < renda && renda <= 4500){
        cout <<"R$ "<< ((renda - 3000)*0.18) + (1000*0.08)<<endl;
   }
   else if (renda > 4500){
        cout <<"R$ "<<((renda - 4500)*0.28) + (1500*0.18) + (1000*0.08) <<endl;
   }
    return 0;
}