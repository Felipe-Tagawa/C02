#include <iostream>
#include <iomanip>
using namespace std;

void peso_ideal(float h, char sexo){
    cout << fixed << setprecision(2);
    if(sexo == 'M'){
        cout << "Peso ideal = " << (72.695 * h) - 58 << " kg" << endl;
    }
    else{
        cout << "Peso ideal = " << (62.1 * h) - 44.7 << " kg" << endl;
    }
    
}

int main(){
    
    double h;
    char sexo;
    
    cin >> h >> sexo;
    peso_ideal(h, sexo);
    
    return 0;
}