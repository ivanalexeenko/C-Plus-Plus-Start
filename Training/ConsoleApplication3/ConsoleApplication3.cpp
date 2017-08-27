#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int A[10];



int main()
{
	for (int i = 0; i < 10; i++) {
		cout << "Enter "<<i<<" number in array " <<  endl;
		cin >> A[i];
	}
	system("cls");
	cout << "Our array :" << endl;

	for (int i = 0; i < 10; i++) {
		cout << "A[" << i << "]=" << A[i] << endl;
	}
	int min = A[0], max = A[0];
	for (int i = 0; i < 10; i++) {
		if (max < A[i]) max = A[i];
		if (min > A[i]) min = A[i];

	}
	cout << "Max element = " << max << endl;
	cout << "Min element = " << min << endl;
	
    return 0;
}

