#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream arq;
    char nomearq[100];
    double valores[100];
    int i;
    int j;
    i = 0;
    
    cin.getline(nomearq, 100);
    
    arq.open(nomearq, ofstream::out); // open liga a variável ao arquivo.
    
    do
    {
    cin >> valores[i];
    i++;
    }while(valores[i-1] != 0);
    
    for(j= 0; j < i-1 ; j++)
    {
        arq << valores[j] << endl;
        cout << valores[j] << endl;
    }

    
    // fechando arquivo.
    arq.close();
    
    return 0;
}