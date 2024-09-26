#include <iostream>
using namespace std;

struct Jedi{
  string nome;
  int base;
};

int main(){
    
    int n, pos;
    string procurado;
    bool achou = false;
    cin >> n;
    
    Jedi jedi[10];
    for(int i = 0;i < n; i++){
        getline(cin >> ws, jedi[i].nome);
        cin >> jedi[i].base;
    }
    
    getline(cin >> ws, procurado);
    
    for(int i = 0; i < n; i++){
        if(procurado == jedi[i].nome){
            achou = true;
            pos = i;
        }
    }
    
    if(achou){
        cout << "Este cavaleiro esta na base " << jedi[pos].base << endl;
    }
    else{
        cout << "Este cavaleiro nao esta cadastrado" << endl;
    }
    
    
    return 0;
}