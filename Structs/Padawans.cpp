#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;

struct dados{
  string nome;
  int pontos;
};

int main(){
 
 int n, maior = INT_MIN, pos = 0;
 float media = 0, soma = 0;
 
 cin >> n;
 
 dados pad[10];
 
 for(int i = 0; i < n; i++){
     getline(cin >> ws, pad[i].nome);
     cin >> pad[i].pontos;
     soma += pad[i].pontos;
     if(pad[i].pontos > maior){
         maior = pad[i].pontos;
         pos = i;
     }
 }
 
 media = soma/n;
 
 cout << "Padawan com mais pontos: " << pad[pos].nome << endl;
 cout << "Pontos: " << pad[pos].pontos << endl;
 cout << "Media da turma: " << fixed << setprecision(2) <<media << " pontos" << endl;
 
 return 0; 
 
}