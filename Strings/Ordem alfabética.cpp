#include <iostream>
using namespace std;

int main(){
    
    string p1, p2, p3;
    
    getline(cin >> ws, p1);
    getline(cin >> ws, p2);
    getline(cin >> ws, p3);
    
    // Iguais ou em ordem padrão:
    if(p1 == p2 && p1 == p3 || p1 == p2 && p1 < p3){
        cout << p1 << " " << p2 << " " << p3 << endl;
    }
    
    // Duas iguais:
    else if(p1 == p3 && p1 < p2){
         cout << p1 << " " << p3 << " " << p2 << endl;
    }
    else if(p2 == p3 && p2 < p1){
         cout << p2 << " " << p3 << " " << p1 << endl;
    }
    
    // Todas diferentes:
    
    // Com p1 menor:
    
    else if(p1 < p2 && p1 < p3){
        if(p2 < p3){
            cout << p1 << " " << p2 << " " << p3 << endl;
        }
        else{
            cout << p1 << " " << p3 << " " << p2 << endl;
        }
    }
    // Com p2 menor:
    else if(p2 < p1 && p2 < p3){
        if(p1 < p3){
            cout << p2 << " " << p1 << " " << p3 << endl;
        }
        else{
            cout << p2 << " " << p3 << " " << p1 << endl;
        }
    }
    // Com p3 menor:
    else if(p3 < p1 && p3 < p2){
        if(p1 < p2){
            cout << p3 << " " << p1 << " " << p2 << endl;
        }
        else{
            cout << p3 << " " << p2 << " " << p1 << endl;
        }
    }
    
    return 0;
}