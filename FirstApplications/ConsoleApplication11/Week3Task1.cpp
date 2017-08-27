#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int  i,n, number = 0, m[10] = { 0 };

int main()
{
	cout << "Enter your number " << endl;
	cin >> n;
	while (n) {
		m[n % 10]++;
		n = n / 10;
	}
	for (i = 0; i < 10; i++)
		if (m[i]) number++;

	cout << number << endl;


	return 0;
}

