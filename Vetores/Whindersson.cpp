#include <iostream>
using namespace std;

int main()
{
    int n, videomais = 0, videomenos = 0;
    
cin >> n;
int valores[50];

for (int i = 0; i < n; i++)
{
    cin >> valores[i];
    if (valores[i] > 10000000) videomais++;
    else if (valores[i] < 10000000) videomenos++;
}

cout << videomais << " video(s) com mais de 10M views" << endl;
cout << videomenos << " video(s) com menos de 10M views" << endl;
    
    
    return 0;
}