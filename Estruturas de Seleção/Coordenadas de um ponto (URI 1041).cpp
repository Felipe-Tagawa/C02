#include <iostream>
using namespace std;

int main(){
    
    float x, y;
    
    cin >> x >> y;
    
    if(x < 0 and y < 0){
        cout << "Q3" << endl;
    }
    else if(x > 0 and y > 0){
        cout << "Q1" << endl;
    }
    else if(x < 0 and y > 0){
        cout << "Q2" << endl;
    }
    else if(x > 0 and y < 0){
        cout << "Q4" << endl;
    }
    else if(x == 0 and y != 0){
        cout << "Eixo Y" << endl;
    }
    else if(x != 0 and y == 0){
        cout << "Eixo X" << endl;
    }
    else{
        cout << "Origem" << endl;
    }
    
    
    return 0;
}