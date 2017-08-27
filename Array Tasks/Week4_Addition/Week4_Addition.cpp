#include "stdafx.h"
#include<iostream>
#include <cmath>
using namespace std;



int main()
{
	int n;
	cin >> n;
	int * A = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter " << i + 1 << " number in array " << endl;
		cin >> A[i];
	} 
	system("cls");
	cout << "Our array is: " << endl;
	for (int i = 0; i < n; i++) cout << "A[" << i + 1 << "]= " << A[i] << endl;
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (A[j] > A[j + 1]) swap(A[j + 1], A[j]);
		}
	}
		
		
    return 0;
}

