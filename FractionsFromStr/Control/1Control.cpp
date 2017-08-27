#include "stdafx.h"
#include <iostream>
#include<cmath>
#include <cstring>
using namespace std;

int main()
{
	
	char str1[100];
	char str2[100];
	char str3[100];
	char str4[100];
	cin.getline(str1, 100);
	cin.getline(str2, 100);
	cin.getline(str3, 100);
	cin.getline(str4, 100);
	cout << endl;
	char*A[4] = { str1,str2,str3,str4 };
		for (int i = 1; i <4 ; i++) {
			for (int j = i; j > 0 && atof(A[j - 1]) > atof(A[j]); j--)
				swap(A[j - 1], A[j]);


	}
		for (int i = 0; i < 4; i++)
			cout << A[i] << endl;
		double a = atof(str1);
		double b = atof(str2);
		double c = atof(str3);
		double d = atof(str4);
		double *aa, *bb, *cc, *dd;
		aa = &a; bb = &b; cc = &c; dd = &d;
		
		cout <<"Summa drobnyh chastey = " << modf(a, aa) + modf(b, bb)+modf(c, cc) + modf(d, dd) << endl;
		int k1 = 0;
		for (int i = (strlen(str1) - 1); i >0; i--) {
			if (str1[i] == '0') k1++;
			else break;

		}
		cout << k1 << endl;
		int k2 = 0;
		for (int i = (strlen(str2) - 1); i >0; i--) {
			if (str2[i] == '0') k2++;
			else break;

		}
		cout << k2 << endl;
		int k3 = 0;
		for (int i = (strlen(str3) - 1); i >0; i--) {
			if (str3[i] == '0') k3++;
			else break;

		}
		cout << k3 << endl;
		int k4 = 0;
		for (int i = (strlen(str4) - 1); i >0; i--) {
			if (str4[i] == '0') k4++;
			else break;

		}
		cout << k4 << endl;
		int NUL[4] = { k1,k2,k3,k4 };

		for (int i = 1; i <4; i++) {
			for (int j = i; j > 0 && (NUL[j - 1]) >NUL[j]; j--)
				swap(NUL[j - 1], NUL[j]);


		}
		cout << NUL[3]<<endl;










    return 0;
}

