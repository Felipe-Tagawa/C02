#include <iostream>
using namespace std;

int sinal(int n)
{
    int p;
    if(p < 0)
 	   return -1;
	
    else if(p > 0)
    	return 1;
	
    else if(p = 0)
    	return 0;
	
}

int main()
{
    int x;
    
    cin >> x;
    
    if(x < 0)
    {
        cout << "Negativo" << endl;
    }
    else if (x > 0)
    {
        cout << "Positivo" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }
    
    return 0;
}