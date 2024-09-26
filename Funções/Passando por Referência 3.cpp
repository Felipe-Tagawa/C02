#include <iostream>
using namespace std;

void troca(int &X, int &Y)
{

}
int main()
{
    int a;
    int b;
    
    // Lendo os valores que serão relacionados a x e a y.
    cin >> a;
    cin >> b;
    
    // Trocando a ordem dos valores.
    troca(b, a);
    
    // Mostrando os valores trocados.
    cout << b << " " << a << endl;
    
    return 0;
}