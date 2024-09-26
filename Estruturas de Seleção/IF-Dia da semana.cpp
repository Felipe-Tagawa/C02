#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int  m, a, d, ds, delta;
	float n, g, f;
	
	cin >> d >> m >> a;
	
	if(m <= 2){
		g = a -1;
		f = m + 13;
	}
	else{
		g = a;
		f = m + 1;
	}
	
	n = int(365.25 * g) + int(30.6 * f) - 621049 + d;
	
	if(n <  36523){
		delta = 2;
	}
	else if(n >= 36523 and n < 73048){
		delta = 1;
	}
	else if(n > 73048){
		delta = 0;
	}
	float intpart;
	float fract = modf(n/7, &intpart);
	ds = round(fract * 7.0) + delta + 1;
	
	if(ds == 1){
	    cout << "domingo" << endl;
	}
	else if(ds == 2){
	    cout << "segunda-feira" << endl;
	}
	else if(ds == 3){
	    cout << "terca-feira" << endl;
	}
	else if(ds == 4){
	    cout << "quarta-feira" << endl;
	}
	else if(ds == 5){
	    cout << "quinta-feira" << endl;
	}
	else if(ds == 6){
	    cout << "sexta-feira" << endl;
	}
	else if(ds == 7){
	    cout << "sabado" << endl;
	}
	
	return 0;
}