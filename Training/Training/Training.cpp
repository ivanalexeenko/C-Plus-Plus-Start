#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int n, result = 1;

int main()
{
	cout << "Enter the exponent of 2 : " << endl;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		result *= 2;
		cout << "2 in  : "<<i<< " exponent = "<< result << endl;
	};

    return 0;
}

