#include "stdafx.h"
#include<iostream>
#include <cmath>
using namespace std;

int Sort(int*A, int n) { 
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
		if(A[j]>A[j+1]) swap(A[j], A[j + 1]);
		}
	}
	return 0;

}
int main()
{
	int index = 0;
	int n;
	cin >> n;
	int*A = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter " << i + 1 << " number in array " << endl;
		cin >> A[i];
	}
	system("cls");
	cout << "Our array is: " << endl;
	for (int i = 0; i < n; i++) cout << "A[" << i + 1 << "]= " << A[i] << endl;
	int min = A[0];
	for (int i = 0; i < n; i++) {
		if (min > A[i]) min = A[i];
		
	}
	cout << "Minimum = " << min << endl;
	for (int i = 0; i < n; i++) {
		if (min == A[i]) {

			index = i;
		cout << "Index min = " << index + 1 << endl;
		}
	}
	Sort(A, index);


	for (int i = index-1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (A[j + 1]  >A[j]) swap(A[j + 1], A[j]);
		}
	} 
	cout << " New array is : " << endl;
	for (int i = n-1 ; i > index ; i--) {
		for (int j = index; j < i; j++) {
			if (A[j + 1] < A[j]) swap(A[j + 1], A[j]);
		}
	} 
	
	
		for (int i = 0; i < n; i++) cout << "A[" << i + 1 << "]= " << A[i] << endl;
	
    return 0;
}

