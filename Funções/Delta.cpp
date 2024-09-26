#include <iostream>
using namespace std;

float calc_delta(float a, float b, float c){
    return b*b-4*a*c;
    
    
}

int main(){
    
    int a,b,c;
    cin >> a >> b >> c;
    int result = calc_delta(a,b,c);
    
    cout << "delta = " << result << endl;
    
    
    return 0;
}