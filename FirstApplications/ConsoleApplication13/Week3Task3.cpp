#include "stdafx.h"
#include <iostream>
#include<cmath>
using namespace std;
int n, b,a, x ;


int main()
{
	cout << "Enter your number " << endl;
	cin >> n;
	for (b = n - 1; b > 1; b--) {

		for (a = 1; a < b; a++) {
			for (int s =2 ; s <= a; s++) {

				if (a%s == 0 && b%s == 0) x++;


			}
			if (x==0)
			cout << a << "/" << b << endl;
			x = 0;
		}
	}
	

    return 0;
}

