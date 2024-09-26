#include <iostream>
#include <iomanip>
using namespace std;

float media(int notas[], int nAlunos){
    
    float soma = 0;
    
    for(int i = 0; i < nAlunos; i++){
        soma += notas[i];
    }
    
    float media = soma / nAlunos;
    
    return media;
    
}

int nAbaixo(int notas[], int nAlunos, float media){
    int menor = 0;
    for(int i = 0; i < nAlunos; i++){
        if(notas[i] < media){
            menor++;
        }
    }
    return menor;
}

int nAcima(int notas[], int nAlunos, float media){
    int maior = 0;
    for(int i = 0; i < nAlunos; i++){
        if(notas[i] >= media){
            maior++;
        }
    }
    return maior;
}

int main(){
    
    int n, notas[20];
    cin >> n;
    
     for(int i = 0; i < n; i++){
        cin >> notas[i];
    }
    
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << media(notas, n) << endl;
    cout << "Alunos com nota abaixo da media: " << nAbaixo(notas, n, media(notas,n)) << endl;
    cout << "Alunos com nota acima da media: " << nAcima(notas, n, media(notas,n)) << endl;
    
    return 0;
}