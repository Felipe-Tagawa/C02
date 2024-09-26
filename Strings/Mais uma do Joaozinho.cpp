#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    int n, n1, n2, n3, n4;
    float media = 0;
    char aluno[30];
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin.ignore();
        cin.getline(aluno, 30);
        cin >> n1 >> n2 >> n3 >> n4;
        
        media = (n1 + 2*n2 + 3*n3 + 4*n4) / 10.0;
        cout  << fixed << setprecision(2) << aluno << ": " << media << endl;
        
    }
    
    return 0;
}