#include <iostream>
 
using namespace std;
 
int main() {
 
   int valor1, valor2, soma = 0, i = 0;
   
   cin >> valor1 >> valor2;
   
   if(valor1 > valor2){
   	if(valor1 % 2 != 0){
		   valor1 = valor1 - 2; // Desconsiderar o primeiro ímpar maior.
	   }
    for(i = valor1; i != valor2; i--){
       if(i % 2 != 0){
           soma += i;
       }
    }
   }
   else{
   	if(valor1 % 2 != 0){
		   valor1 = valor1 + 2; // Desconsiderar o primeiro ímpar menor.
	   }
       for(i = valor1; i != valor2; i++){
       if(i % 2 != 0){
           soma += i;
       }
    }
   }
   
   cout << soma << endl;
 
    return 0;
}