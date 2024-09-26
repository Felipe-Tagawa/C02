#include <iostream>
 
using namespace std;
 
int main() {
 
    int x;
    int y;
    while (x>y || x<y)
	{
    cin >> x;
    cin >> y;
    if(x>y){
    cout << "Decrescente" << endl;
    }
    else if (x<y){
    cout << "Crescente" << endl;
    }
	}
    return 0;
}