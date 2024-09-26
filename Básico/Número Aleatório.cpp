#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int n;
	
	srand(time(NULL));
	n = rand()%51;
	
	cout << n << endl;
	
	return 0;
}