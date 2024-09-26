#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
   int num;
   int horas;
   double valor;
   
   cin >> num >> horas >> valor;
   cout << fixed << setprecision (2);
   cout << "NUMBER = " << num<<endl;
   cout << "SALARY = U$ " << horas*valor <<endl;
 
    return 0;
}