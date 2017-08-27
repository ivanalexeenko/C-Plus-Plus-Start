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
	int i2 = 0;
	int j2 = n;
	while (i2 < n-3) {
		i2++;
		j2--;
		cout << A[i2] + B[i2] << "x^" << j2 << "+";}
	cout << A[n-2] + B[n-2] << "x^" << j2 << "+";


    return 0;
}

