#include "stdafx.h"
#include <iostream>
#include<cmath>
using namespace std;
int InputArray(int *A, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Enter " << i + 1 << " number in array" << endl; cin >> A[i];
	}

	return A[0];
}
int OutputArray(int*A, int n) {
	for (int i = 0; i < n; i++)  cout << "A[" << i << "] = " << A[i] << endl; 
	return A[0];
}
int SimpleNumbers(int*A, int &n) {
	cout << "Simple numbers in array: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 2; j <= A[i] / 2; j++)
		{
			if (A[i] % j == 0 && A[i] != j)
			{
				A[i] = 0;
			
			}
		}
		if (A[i] != 1&& A[i] != 0) {

			cout << A[i] << endl;
		}

		
		}
	return 0;
}
int InsertSort(int*A , int n) {
	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0 && A[j - 1] > A[j]; j--)
			swap(A[j - 1], A[j]);

	}
	return A[0];

}
int main()
{
	int c;
	int n;
	cin >> n;
	int*A = new int[n];
	InputArray(A, n);
	system("cls");
	OutputArray(A, n);
	cout << " What you gonna do,fellow?" << endl;
	cout << " 1(Search of simple numbers "<< endl;
	cout << " 2(New array sort) " << endl;
	cout << " 3(Array median )" << endl;
	cin >> c;
	switch (c) {
	case 1: SimpleNumbers(A, n); break;
	case 2: {InsertSort(A, n); OutputArray(A, n); }; break;
	case 3: {InsertSort(A, n);
		if (n % 2 == 0)
			cout << "Median in array is : " << A[n / 2 ] << endl;
		else if (n % 2 != 0)
			cout << "Median in array is : " << (A[n / 2] + A[n / 2 + 1]) / 2 << endl;
	}

	}

	
    return 0;
}

