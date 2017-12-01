#include <iostream>
#include <iomanip>
using namespace std;





int main(){
	
	char *matrice=new char[256];
	char *tinta, *destinatie;
	int i;
	tinta=new char[256];

	for(i=0;i<256;i++){
		matrice[i]='a';
		tinta[i]='b';
	}
	delete matrice;
	destinatie=new char[256];
	for(i=0;i<256;i++){
		destinatie[i]=tinta[i];
		cout << destinatie[i] << ' ';
	}
	delete destinatie, tinta;
	
	

	

	system("pause");
	return 0;
}