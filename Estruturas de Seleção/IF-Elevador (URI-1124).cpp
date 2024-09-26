#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int l = 0, c = 0, r1 = 0, r2 = 0, maior_diametro = 0;
    double diagonal;
    bool saida = false;
    //char saida = 'N';
    cin >> l >> c >> r1  >> r2; // Largura, comprimento, raio 1 e raio 2.
         
    if(r1 > r2){
        maior_diametro = 2*r1;
	}
    else{
        maior_diametro = 2*r2;
	}
     
    if(maior_diametro <= l && maior_diametro <= c){ // Está dentro na horizontal e na vertical.
        diagonal = sqrt(pow((l - r2 - r1),2)+pow((c - r2 - r1),2));
		if(diagonal >=  r1 + r2){
            saida = true;
        }
    }
     
 	if(saida){
		cout << "S" << endl;	 
	}
	else{
		cout << "N" << endl;
	}
     
    return 0;
}


/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int l, c, r1, r2;
    
    cin >> l >> c >> r1 >> r2;
    double diagonal = int(sqrt((l*l)+(c*c)));

    if (r1 > r2 and l > c) {
        if(2*(r1+r2) < diagonal and 2*(r1+r2) < l){
            cout << "S" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }
    else if(r1 < r2 and l < c){
        if(2*(r1+r2) < diagonal and 2*(r1+r2) < c){
            cout << "S" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }
    // Caso mais chato:
    else if(r1 > r2 and l < c){
        if(2*(r1+r2) < diagonal){
            cout << "S" << endl;
        }
        else if(2*r1 + 2*r2  < c){
            cout << "S" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }
    else if(r1 < r2 and l > c){
        if(2*(r1 + r2) < diagonal and 2*(r1+r2) < l){
            cout << "S" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }

    return 0;
}*/