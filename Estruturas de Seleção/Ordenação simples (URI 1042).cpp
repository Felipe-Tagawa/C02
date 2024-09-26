#include <iostream>

using namespace std;

int main() {

	int a;
	int b;
	int c;
	int aux = 0;

	cin >> a >> b >> c;

	// Encontre o menor valor
	int menor;

	if (a <= b && a <= c) {
		menor = a;
	} else if (b <= a && b <= c) {
		menor = b;
	} else {
		menor = c;
	}

	// Encontre o maior valor
	int maior;

	if (a >= b && a >= c) {
		maior = a;
	} else if (b >= a && b >= c) {
		maior = b;
	} else {
		maior = c;
	}

	// O valor do meio é o que sobra
	int meio = a + b + c - menor - maior;

	cout << menor << endl;
	cout << meio << endl;
	cout << maior << endl;

	cout << endl;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}
/*
Ou:

#include <iostream>
 
using namespace std;
 
int main() {
 
  int a;
  int b;
  int c;
  
  cin >> a >> b >> c;
  
  if(a < b && a < c)
  {
  cout << a << endl;
    if (b > c)
    {
        cout << c << endl;
        cout << b << endl;
    }
        if(c > b)
        {
            cout << b << endl;
            cout << c << endl;
        }
  }
  else if (b < a && b < c)
  {
      cout << b << endl;
        if(a > c)
        {
            cout << c << endl;
            cout << a << endl;
        }
            if (c > a)
            {
                cout << a << endl;
                cout << c << endl;
            }
  }
  else if (c < a && c < b)
  {
  cout << c << endl;
    if(a > b)
    {
        cout << b << endl;
        cout << a << endl;
    }
        if(b > a)
        {
            cout << a << endl;
            cout << b << endl;
        }
  }
  
  cout << endl;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
 
    return 0;
}
*/

/* 
#include <iostream>
using namespace std;

int main(){
	
	int aux, a, b, c;
	int a_,b_,c_;
	
	cin >> a >> b >> c;
	
	a_ = a;
	b_ = b;
	c_ = c;
	
	if(a > b){
		aux = a;
		a = b;
		b = aux;
	}
	if(a > c){
		aux = a;
		a = c;
		c = aux;
	}
	if(b > c){
		aux = b;
		b = c;
		c = aux;
	}
	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	
	cout << endl;
	
	cout << a_ << endl;
	cout << b_ << endl;
	cout << c_ << endl;
	
	
	return 0;
}
*/
