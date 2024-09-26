#include <iostream>
#include <climits>
using namespace std;

struct storm{
  int id;
  float im, fa;
};

int main(){
    
    storm storm[50];
    int i = 0, pos;
    float media = 0;
    float maior = INT_MIN;
    
    while(cin >> storm[i].id && storm[i].id != 0){
        cin >> storm[i].im >> storm[i].fa;
        media = (storm[i].im + storm[i].fa) / 2.0;
        if(media > maior){
            maior = media;
            pos = i;
        }
        i++;
    }
    
    cout << "Stormtrooper escolhido: " << storm[pos].id << endl;
    cout << "GA = " << maior << endl;
    
    return 0;
}