#include <iostream>
using namespace std;

int main()
{
	int i;
	int n;
	float maior;
	maior = 0;
	float altura;
	
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> altura;
		if (altura > maior)
			maior = altura;
		
	}
		
	cout << "A maior altura eh : " << maior << endl;	
	
	return 0;
}