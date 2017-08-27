#include "stdafx.h"
#include <iostream>
#include<cmath>
using namespace std;
int InputArray(int *A, int n) {
	for (int i = 0; i < n; i++) {
		 cin >> A[i];
	}

	return A[0];
}
int OutputArray(int*A, int n) {
	for (int i = 0; i < n; i++) cout<< A[i] << "\t";
	return A[0];
}
int InputMatrix(int **A, int str,int stlb) {
	cout << "Input matrix" << endl;
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < stlb; j++)
			cin >> A[i][j];
	}
	return A[0][0];
}
int OutputMatrix(int**A, int str,int stlb) {
	cout << "Matrix" << endl;
	for (int i = 0; i<str; i++)
	{
		for (int j = 0; j<stlb; j++)
			cout << A[i][j] << "\t";
		cout << endl;
	}
	return A[0][0];
}
int DeleteStr(int**A, int str, int stlb, int l) {
	if (l<1 || l>str) cout << "Wrong input " << endl;
	else {
		cout << "New matrix without string number " << l << " is :" << endl;
		for (int i = 0; i < l - 1; i++)
		{
			for (int j = 0; j < stlb; j++)
				cout << A[i][j] << "\t";
			cout << endl;
		}

		for (int i = l; i < str; i++)
		{
			for (int j = 0; j < stlb; j++)
				cout << A[i][j] << "\t";
			cout << endl;
		}
		return l;

	}
}
int InsertStr(int**A, int*B, int str, int stlb, int m ) {
	if (m == 0) {
		for (int i = 0; i < stlb; i++) cout << B[i] << "\t";
		cout << "Matrix" << endl;
		for (int i = 0; i<str; i++)
		{
			for (int j = 0; j<stlb; j++)
				cout << A[i][j] << "\t";
			cout << endl;
		}
	}
	else if (m == str + 1) {
		cout << "Matrix" << endl;
		for (int i = 0; i<str; i++)
		{
			for (int j = 0; j<stlb; j++)
				cout << A[i][j] << "\t";
			cout << endl;
		}
		for (int i = 0; i < stlb; i++) cout << B[i] << "\t";
		
	}
	else if (m != str + 1 || m != 0) {
		for (int i = 0; i < m - 1; i++)
		{
			for (int j = 0; j < stlb; j++)
				cout << A[i][j] << "\t";
			cout << endl;
		}

		for (int i = 0; i < stlb; i++) {
			cout<< B[i]<<"\t";
		}
		cout << endl;

		for (int i = m - 1; i < str; i++)
		{
			for (int j = 0; j < stlb; j++)
				cout << A[i][j] << "\t";
			cout << endl;

		}
	}
	return m;
}
int main()
{
	int str,stlb;
	cout << "Set a size of matrix :" << endl;
	cin >> str >> stlb;
	int**A = new int *[str];
	for (int i = 0; i < str; i++) A[i] = new int[stlb];
	InputMatrix(A, str, stlb);
	system("cls");
	OutputMatrix(A, str, stlb);
	cout << endl;
	int choice;
	cout << "Choose an option,bro: " << endl;
	cout << "1. Add new string " << endl;
	cout << "2. Delete one string " << endl;
	cin >> choice;
	switch(choice){
	case 1: {
		cout << endl;
		int m;
		cout << "Our string should be inserted as : ";
		cin >> m;
		int*B = new int[stlb];
		cout << "Input a new string to be inserted:" << endl;
		InputArray(B, stlb);
		InsertStr(A, B, str, stlb, m); break;
	}
	case 2: {
		int l;
		cout << "Choose a string to delete: ";
		cin >> l;
		DeleteStr(A, str, stlb, l); break;
	}
	}
	


    return 0;
}

