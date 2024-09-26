#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char nome_da_cidade[30];
    
    cin.getline(nome_da_cidade, 30);
    
    if(strcmp(nome_da_cidade, "Brasilia")==0){
        cout << "61" << endl;
    }
    else if(strcmp(nome_da_cidade, "Salvador") == 0){
        cout << "71" << endl;
    }
    else if(strcmp(nome_da_cidade, "Sao Paulo") == 0){
        cout << "11" << endl;
    }
    else if(strcmp(nome_da_cidade, "Rio de Janeiro") == 0){
        cout << "21" << endl;
    }
    else if(strcmp(nome_da_cidade, "Juiz de Fora") == 0){
        cout << "32" << endl;
    }
    else if(strcmp(nome_da_cidade, "Campinas") == 0){
        cout << "19" << endl;
    }
    else if(strcmp(nome_da_cidade, "Vitoria") == 0){
        cout << "27" << endl;
    }
    else if(strcmp(nome_da_cidade, "Belo Horizonte") == 0){
        cout << "31" << endl;
    }
    else if(strcmp(nome_da_cidade, "Santa Rita do Sapucai") == 0){
        cout << "35" << endl;
    }
    else{
        cout << "DDD nao cadastrado" << endl;
    }
    
    
    return 0;
}