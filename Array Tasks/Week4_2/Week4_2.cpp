#include "stdafx.h"
#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,y;
	cin >> n;
	int * A = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter " << i + 1 << " number in array " << endl;
		cin >> A[i];
	}
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (A[j + 1] > A[j]) swap(A[j + 1], A[j]);
		}
}
	int x = A[0] * A[1] * A[2];
	if ((y = A[0] * A[n - 1] * A[n - 2])>x)
		cout << y << endl;
	else
		cout << x << endl;
    return 0;
}

