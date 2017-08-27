#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	int a, b, c, D;
	double x1, x2, x;
	cout << "Insert a" << endl;
	cin >> a;
	cout << "Insert b" << endl;
	cin >> b;
	cout << "Insert c" << endl;
	cin >> c;
	D = b*b - 4 * a*c;
	if (D<0) cout << "No solutions" << endl;
	else {
		if (D == 0) {
			x = b*(-1) / 2 / a;;
			cout << "x=" << x << endl;
		}
		else {
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			cout << "x1=" << x1 << endl;
			cout << "x2=" << x2 << endl;
		}
	}
			
			system("pause");

	return 0;
}