#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double n1;
    double n2;
    double n3;
    double n4;
    double nota_exame;
    double media;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    
    cout << fixed << setprecision(1);
    media = (1.0*n1*2 + n2*3 + n3*4 + n4)/(10.0);
    cout << "Media: " << media << endl;
    if (media >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if(media < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else if( media >= 5.0 && media <=6.9)
    {
        cout << "Aluno em exame." << endl;
        cin >> nota_exame;
        cout << "Nota do exame: " << nota_exame << endl;
        if((media + nota_exame)/(2.0) >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else if((media + nota_exame)/(2.0) < 5.0)
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: "<< (media + nota_exame)/2.0 << endl;
    }
 
    return 0;
}