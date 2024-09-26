#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    int i;
    int valor;
    cin >> n;
    for (i=0;i<n;i++)
    {
        cin >> valor;
        if (valor > 0 && valor % 2 == 0){
        cout << "EVEN POSITIVE" << endl;
        }
        else if (valor > 0 && valor % 2 != 0){
            cout << "ODD POSITIVE" << endl;
        }
        else if (valor < 0 && valor % 2 == 0){
            cout << "EVEN NEGATIVE" << endl;
        }
        else if (valor < 0 && valor % 2 != 0){
            cout << "ODD NEGATIVE" << endl;
        }
        else{
            cout << "NULL" << endl;
        }
    }
 
    return 0;
}