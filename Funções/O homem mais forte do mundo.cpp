#include <iostream>
using namespace std;

struct dados{
    string nome;
    int n1, n2, n3, n4;
};

int strongest(dados atletas[], int nAtletas){
    int strongest = 0, pos = 0;
    
   for(int i = 0; i < nAtletas; i++)
    {
        if(atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4 > strongest){
            strongest = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;
            pos = i;
        }
    }
    
    return pos;
    
}

int main(){
    
    
    int n;
    
    cin >> n;
    dados atletas[50];
    
    for(int i = 0; i < n; i++){
        getline(cin >> ws, atletas[i].nome);
        cin >> atletas[i].n1 >> atletas[i].n2 >> atletas[i].n3 >> atletas[i].n4;
    }
    
    int pos = strongest(atletas, n);
    
    cout << "Vencedor: " << atletas[pos].nome << endl;
    
    
    
    
    return 0;
}