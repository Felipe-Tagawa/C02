#include <iostream>
 
using namespace std;
 
int main() {
 
    int cod;
    
    cin >> cod;
    
    if ( cod == 61 ){
    cout<<"Brasilia"<< endl;}

     if ( cod == 71 ){
    cout<<"Salvador"<< endl;}
    
      if ( cod == 11 ){
     cout<<"Sao Paulo"<< endl;}
     
       if ( cod == 21 ){
     cout<<"Rio de Janeiro"<< endl;}
      
        if ( cod == 32 ){
      cout<<"Juiz de Fora"<< endl;}
       
         if ( cod == 19 ){
        cout<<"Campinas"<< endl;}
        
          if ( cod == 27 ){
        cout<<"Vitoria"<< endl;}
         
           if ( cod == 31 ){
        cout<<"Belo Horizonte"<< endl;}	 

  if (cod != 61 && cod != 71 && cod != 11 && cod != 21 && cod != 32 && cod != 19 && cod != 27 && cod != 31){
	  cout << "DDD nao cadastrado"<<endl;
  }
  			  

    return 0;
}