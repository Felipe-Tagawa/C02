#include <iostream>
 
using namespace std;
 
int main() {
 
    int hi, mi, hf, mf;
    cin >> hi >> mi >> hf >> mf;
    
    if(hi < hf)
    {
        if(mi < mf)
        {
            cout << "O JOGO DUROU " << hf-hi << " HORA(S) E " << mf - mi << " MINUTO(S)" << endl; 
        }
        if(mi > mf)
        {
           cout << "O JOGO DUROU " << hf-hi-1 << " HORA(S) E " << 60 - mi + mf << " MINUTO(S)" << endl;  
        }
    }
    else if(hi > hf)
    {
        if(mi < mf)
        {
            cout << "O JOGO DUROU " << 24+hf-hi << " HORA(S) E " << mf - mi << " MINUTO(S)" << endl; 
        }
        if(mi > mf)
        {
            cout << "O JOGO DUROU " << 24+hf-hi-1 << " HORA(S) E " << 60 - mi + mf << " MINUTO(S)" << endl; 
        }
    }
    else
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
 
    return 0;
}