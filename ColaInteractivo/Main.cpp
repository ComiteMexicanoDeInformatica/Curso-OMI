#include<iostream>
#include"ColaInteractivo.h"

using namespace std;

void Main()
{
	int n;
	char a;
	int value;
	cin >> n;
	for (int i = 0; i< n; i++){
		cin >> a;
		if (a == 'a') {
			cin >> value;
			agrega(value);
		}
		else if (a == 's') {
			cout << saca() << endl;	
		} else {
			cout << longitud() << endl;	
		}
	}
}


