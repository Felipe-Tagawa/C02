#include <iostream>
#include <iomanip>
using namespace std;

float media(int notas[], int nAlunos){
    
    float soma = 0;
    
    for(int i = 0; i < nAlunos; i++){
        cin >> notas[i];
        soma += notas[i];
    }
    
    float media = soma / nAlunos;
    
    return media;
    
}

int main(){
    
    int n, notas[10];
    cin >> n;
    
    float result = media(notas, n);
    
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << result << endl;

    return 0;
}