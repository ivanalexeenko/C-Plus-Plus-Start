#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int a, b;

int main()
{
	cout << " Enter two numbers: " << endl;
	cin >> a >> b;
	int a1 = a, b1 = b;
	while (b)
	{
		a %= b,
		swap(a, b);
	}
	cout << "NOD = " << a << endl;
	cout << "NOK = " << a1*b1/a << endl;

	

    return 0;
}

