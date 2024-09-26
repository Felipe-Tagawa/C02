#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream arq;
    char nomearq[100];
    double temperatura[100];
    int aux; // contador.
    int i;
    int n; // número de temperaturas.
    double media;
    double soma;
    soma = 0;
    media = 0;
    aux = 0;
    cin.getline(nomearq, 100);
    arq.open(nomearq, ifstream::in);
    while(!arq.eof())
    {
        arq >> temperatura[aux];
        soma = soma + temperatura[aux];
        aux++;
    }
    n = aux;
    media = soma/n;
    
    cout << media << endl;
    arq.close();
    
    
    return 0;
}
