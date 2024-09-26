#include <iostream>
using namespace std;

int main(){
    
    int n, idade;
    char jogador[30];
    bool tem_maior = false;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin.ignore();
        cin.getline(jogador, 30);
        cin >> idade;
        
        if(idade >= 18){
            cout << jogador << " " << idade << endl;
            tem_maior = true;
        }
    }
    
    if(!tem_maior){
        cout << "Nenhum jogador com 18 anos ou mais" << endl;
    }
    
    
    return 0;
}