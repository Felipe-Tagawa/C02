#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char p1[20];
	char p2[20];
	char p3[20];

	cin.getline(p1, 20);
	cin.getline(p2, 20);
	cin.getline(p3, 20);

	if(strcmp(p1, "vertebrado") == 0)
		if(strcmp(p2, "ave") == 0)
			if(strcmp(p3, "carnivoro") == 0)
				cout << "aguia" << endl;

	if(strcmp(p1, "vertebrado") == 0)
		if(strcmp(p2, "ave") == 0)
			if(strcmp(p3, "onivoro") == 0)
				cout << "pomba" << endl;

	if(strcmp(p1, "vertebrado") == 0)
		if(strcmp(p2, "mamifero") == 0)
			if(strcmp(p3, "onivoro") == 0)
				cout << "homem" << endl;

	if(strcmp(p1, "vertebrado") == 0)
		if(strcmp(p2, "mamifero") == 0)
			if(strcmp(p3, "herbivoro") == 0)
				cout << "vaca" << endl;

	if(strcmp(p1, "invertebrado") == 0)
		if(strcmp(p2, "inseto") == 0)
			if(strcmp(p3, "hematofago") == 0)
				cout << "pulga" << endl;

	if(strcmp(p1, "invertebrado") == 0)
		if(strcmp(p2, "inseto") == 0)
			if(strcmp(p3, "herbivoro") == 0)
				cout << "lagarta" << endl;

	if(strcmp(p1, "invertebrado") == 0)
		if(strcmp(p2, "anelideo") == 0)
			if(strcmp(p3, "hematofago") == 0)
				cout << "sanguessuga" << endl;

	if(strcmp(p1, "invertebrado") == 0)
		if(strcmp(p2, "anelideo") == 0)
			if(strcmp(p3, "onivoro") == 0)
				cout << "minhoca" << endl;

	return 0;
}
