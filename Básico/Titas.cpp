#include <iostream>
#include <cmath>
using namespace std;

typedef struct{
    int quantidade;
    string tamanho;
}titas;
 
using namespace std;
 
int main() {
 
 titas tita;
 int altura_muralha, tita_pequeno, tita_medio, tita_grande;
 int menor = 0, medio = 0, grande = 0;
 double destruir = 0;
 
 cin >> tita.quantidade >> altura_muralha;
 
 for(int i = 0; i < tita.quantidade; i++){
     cin >> tita.tamanho;
     if(tita.tamanho == "P"){
         menor++;
     }
     else if(tita.tamanho == "M"){
         medio++;
     }
     else{
         grande++;
     }
 }
 
 cin >> tita_pequeno >> tita_medio >> tita_grande;
 
 destruir += tita_pequeno * menor + tita_medio * medio + tita_grande * grande;
 
 cout << ceil(destruir / altura_muralha) << endl;
 
 
    return 0;
}