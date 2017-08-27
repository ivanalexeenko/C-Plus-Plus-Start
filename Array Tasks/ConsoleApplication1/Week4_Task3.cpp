#include "stdafx.h"
#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int*A = new int[n];
	for (int i = 0; i < n; i++) { cout << "Enter the " << i + 1 << " number in array" << endl; cin >> A[i]; }
	int n1;
	cin >> n1;
	int*B = new int[n1];
	for (int i1 = 0; i1 < n1; i1++) { cout << "Enter the " << i1 + 1 << " number in array" << endl; cin >> B[i1]; }
	system("cls");
	cout << "Our expression (1) is: " << endl;
	int i = -1;
	int j = n;
	while (i < n - 3) {
		i++;
		j--;
		cout << A[i] << "x" << "^" << j << "+";
	}
	cout << A[n - 2] << "x" << "+"; cout << A[n - 1] << endl;
	cout << "Our expression (2) is: " << endl;
	int i1 = -1;
	int j1 = n1;
	while (i1 < n1 - 3) {
		i1++;
		j1--;
		cout << B[i1] << "x" << "^" << j1 << "+";
	}
	cout << B[n1 - 2] << "x" << "+"; cout << B[n1 - 1] << endl;
	int*Pr = new int[n + n1];
	cout << "Summ of (1) and (2): " << endl;
	j = -1; j1 = -1;
	while (j1 != n1 - 1)
	{
		j++; j1++;
		cout << A[n - j1 - 1] + B[n1 - j1 - 1] << "x^" << j1 << "+";
	
	}
	int k = n;
	for (int i = 0; i < n - n1; i++) {
	
		k--;
		cout << A[i] << "x^" << k << "+";
}	cout <<"0"<< endl;
	cout << endl;
	for( int i=0; i<=n1+n-2; i++)
		Pr[i]=0;

	cout << "Multiplication of (1) and (2) : " << endl;
	for (int i = n+n1-2; i >=0;i--){
		for (int j = n-1; j >=0 ;j--) {
			for (int k = n1-1; k >=0;k--) {
				if (j + k == i)
					Pr[i] += A[j] * B[k];
				}

		}

	}
	int x=0;
	for (int i = n + n1 - 2; i >= 0; i--)
	{
		x = n+n1-2-i;
		cout << Pr[i] << "x^" << x << "+";
	}
	return 0;
}

