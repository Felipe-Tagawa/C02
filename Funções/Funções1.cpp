#include <iostream>
using namespace std;

int calc_a(int x){
    return 2*x*x + 3*x - 1;
}
int calc_b(int x){
    return x*x*x;
}
int calc_c(int y){
    return y*y*y;
}

int main(){
    
    int x, y;
    
    cin >> x >> y;
    
    cout << "a = " << calc_a(x) << endl;
    cout << "b = " << calc_b(x) << endl;
    cout << "c = " << calc_c(y) << endl;
    
    return 0;
    
}