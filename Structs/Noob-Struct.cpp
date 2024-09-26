#include <iostream>
#include <iomanip>
using namespace std;

struct dados{
    int mat;
    float n1,n2;
};

int main(){
    
    dados aluno;
    
    cin >> aluno.mat >> aluno.n1 >> aluno.n2;
    
    cout << "Matricula do aluno: " << aluno.mat << endl; 
    cout << "Nota da primeira prova: " << fixed << setprecision(2) << aluno.n1 << endl;
    cout << "Nota da segunda prova: " << fixed << setprecision(2) << aluno.n2 << endl;
    cout << "Media: " << fixed << setprecision(2) << (aluno.n1 * 2 + aluno.n2 * 3)/5.0 << endl;
    
    return 0;
}