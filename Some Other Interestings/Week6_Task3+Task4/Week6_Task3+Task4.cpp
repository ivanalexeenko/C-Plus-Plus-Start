#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int DecConst(char * str, int*num) {
	bool b = false;
	int n = strlen(str) + 1;
	int k = 0, x = 0;
	for (int i = 0; i < n; i++) {
		if (isdigit(str[i])) {
			x = x * 10 + (str[i] - '0');
			b = true;
		}

		else {

			if (b)
			{
				num[k] = x;
				++k;
				x = 0;
				b = false;
			}


		}


	}
	for (int i = 0; i < k; i++) cout << num[i] << ' ';
	return k;
}
int RealConst(char*str2,double*realn) {
	
	
	int x = 0;
	int y = 0;
	bool cifra = false;
	cout << "Real constants :" << endl;
	for (unsigned int i = 0, x = 0; i < strlen(str2); i++, x++) {

		if (isdigit(str2[i]) || str2[i] == '.'&&cifra==true) {
			cifra = true;
			y++;

		}

		else {
			cifra = false;
			y = 0;
		}


		if (cifra == true && y < 2) {

			realn[x] = atof(str2 + i);


			cout << realn[x] << endl;


		}
	}
	return x;
}
int main()
{
	cout << "Enter string with decimal constants: " << endl;
	char str[100];
	int num[100];
	cin.getline(str, 100);
	DecConst(str,num);
	cout << endl;
	cout << "Enter string with real constants: " << endl;
	double realn[100];
	char str1[100];
	cin.getline(str1, 100);
	RealConst(str1,realn);
	return 0;
}

