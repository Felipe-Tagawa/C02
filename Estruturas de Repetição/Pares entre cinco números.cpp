#include <iostream>
 
using namespace std;
 
int main() {
 
    int valores;
    int pares;
    int i;
    pares = 0;
    
    for (i=0; i<5;i++)
    {
        cin >> valores;
        if(valores %2 == 0)
        pares++;
    }
    cout << pares << " valores pares" << endl;
 
    return 0;
}