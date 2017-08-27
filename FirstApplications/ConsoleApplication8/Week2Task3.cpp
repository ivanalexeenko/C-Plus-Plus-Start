#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int n, sum;


int main()
{
	cout << "Enter your number" << endl;
	cin >> n;
	sum = 0;
	while (n)
	{
		sum = sum + n % 10;
			n = n / 10;
	} cout << "Your summ is " << sum << endl;
	_gettch();
    return 0;
}

