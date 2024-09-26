#include <iostream>
using namespace std;

int main(){
    
    int t;
    string jogadaA, jogadaB;
    
    cin >> t; // Casos de teste.
    
    for(int i = 0; i < t; i++){
        getline(cin >> ws, jogadaA);
        getline(cin >> ws, jogadaB);
    
        if(jogadaA == jogadaB){
            cout << "Empate" << endl;
        }
        else if(jogadaA == "papel" && jogadaB == "pedra" || jogadaA == "tesoura" && jogadaB == "papel" || jogadaA == "pedra" && jogadaB == "tesoura" ){
            cout << "Jogador A" << endl;
        }
        else{
            cout << "Jogador B" << endl;
        }
    }
    
    return 0;
}