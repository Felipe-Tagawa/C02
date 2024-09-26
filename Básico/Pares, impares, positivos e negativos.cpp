#include <iostream>
 
using namespace std;
 
int main() {
 
    int valores;
    int i;
    int pares = 0;
    int impares = 0;
    int posit = 0;
    int negat = 0;
    for (i = 0; i < 5; i++)
    {
        cin >> valores;
        if(valores % 2 == 0)
        {
            pares++;
        }
        if(valores % 2 != 0)
        {
            impares++;
        }
        if(valores > 0)
        {
            posit++;
        }
        if(valores < 0)
		{
			negat++;
		}
		
		cout << pares << " valor(es) par(es)" << endl;
		cout << impares << " valor(es) impar(es)" << endl;
		cout << posit << " valor(es) positivo(s)" << endl;
		cout << negat << " valor(es) negativo(s)" << endl;
        
        
    }
 
    return 0;
}