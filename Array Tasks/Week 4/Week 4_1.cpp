#include "stdafx.h"
#include<iostream>
#include <cmath>
using namespace std;
const int N = 9;
int Array[N];
bool x = true;


int main()
{
	for (int i = 0; i < N; i++) {
		cout << "Enter " << i+1 << " number in array " << endl;
		cin >> Array[i];
	}
	cout << "\n";
	for (int i = 0; i < N; i++) {
		int number = 0;
		for (int j = 0; j < N; j++) {
			if (Array[i] == Array[j]) number++;
		}
			if ((number % 2) != 0 && x == true) {
				x = false;

				cout << Array[i] << endl;
					
			}
	}


	return 0;
}