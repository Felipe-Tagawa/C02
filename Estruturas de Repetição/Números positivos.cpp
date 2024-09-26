#include <iostream>
using namespace std;

int main(){
    
    int valores, pos = 0;
    for(int i = 0;i < 6; i++){
        cin >> valores;
        if(valores > 0){
            pos++;
        }
    }
    
    cout << pos << " valores positivos" << endl;
    
    return 0;
}